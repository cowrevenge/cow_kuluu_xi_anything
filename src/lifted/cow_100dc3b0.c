/* f_0x100dc3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100dc3b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100dc3c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100dc3c6;
    case 0x100dc3cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100dc3ca;
    case 0x100dc3d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100dc3d3;
    case 0x100dc3deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100dc3de;
    case 0x100dc3e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100dc3e2;
    case 0x100dc3ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100dc3eb;
    default: break;
    }
#endif

    COW_AT(100dc3b0)
    wr32(sp0 - 0x84u, 0x80u);
    wr32(sp0 - 0x88u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->edx = in_edx;
    g->esp = sp0 - 0x80u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329468u)), 2, sp0 - 0x80u, 0x80u);   /* ws2_32.dll!gethostname */
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100dc3c6)
    if (eax == 0u) goto L_100dc3d3;
    COW_AT(100dc3ca)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100dc3d3: ;
    COW_AT(100dc3d3)
    wr32(sp0 - 0x84u, sp0 - 0x80u);
    g->eax = eax;
    g->esp = sp0 - 0x80u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x10329470u)), 1, sp0 - 0x80u);   /* ws2_32.dll!gethostbyname */
    eax = t3;
    COW_AT(100dc3de)
    if (eax != 0u) goto L_100dc3eb;
    COW_AT(100dc3e2)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100dc3eb: ;
    COW_AT(100dc3eb)
    wr32(sp0 - 0x84u, in_esi);
    t4 = (uint32_t)(int16_t)rd16(eax + 0xau);
    wr32(sp0 - 0x88u, in_edi);
    t5 = rd32(rd32(eax + 0xcu));
    esi = t5;
    edi = arg1;
    ecx = t4 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t4 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esi = in_esi;
    g->edi = in_edi;
    return (t4 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100dc3b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100dc3c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x88u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100dc3cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x88u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100dc3d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x88u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100dc3deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x88u, sp0 - 0x80u);
        wr32(sp0 - 0x84u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100dc3e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x88u, sp0 - 0x80u);
        wr32(sp0 - 0x84u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x100dc3ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x88u, sp0 - 0x80u);
        wr32(sp0 - 0x84u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc3b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100dc3b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
