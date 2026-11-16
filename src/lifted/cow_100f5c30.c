/* f_0x100f5c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5c30(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    if (arg2 != 0u)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x58u, 0u);
        wr32(sp0 - 0x5cu, 0x200u);
        wr32(sp0 - 0x60u, arg1 + 0xc48u);
        wr32(sp0 - 0x64u, 7u);
        edi = arg1 + 0xc48u;
        eax = 0u;
        ecx = 0x80u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->edx = arg1 + 0xc48u;
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 7u, arg1 + 0xc48u, 0x200u, 0u);
        t1 = g->edx;
        edx = t1;
    }
    wr32(sp0 - 0x58u, arg1 + 8u);
    wr32(sp0 - 0x5cu, sp0 + 8u);
    wr32(sp0 - 0x60u, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t2 = cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, arg2, sp0 + 8u, arg1 + 8u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0x17u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_100f5c86;
    }
    edx = t4;
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = edx;
    return 0xfu;
L_100f5c86: ;
    if (eax != 0x18u) goto L_100f5d07;
    wr32(sp0 - 0x58u, arg2);
    wr32(sp0 - 0x5cu, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    g->edx = arg2;
    g->esp = sp0 - 0x54u;
    t5 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x48u, arg2);
    t6 = g->edx;
    if (t5 != 0u)
    {
        edx = t6;
        goto L_100f5d02;
    }
    edx = t6;
    if (rd32(sp0 - 0x18u) != rd32(arg1 + 0x58u)) goto L_100f5d02;
    if (rd32(sp0 - 0x14u) != rd32(arg1 + 0x5cu))
    {
        edx = rd32(sp0 - 0x14u);
        goto L_100f5d02;
    }
    edx = rd32(sp0 - 0x14u);
    if (rd32(arg1 + 0x60u) != 0u)
    {
        eax = rd32(arg1 + 0x60u);
        ecx = rd32(arg1 + 0x64u);
        goto L_100f5cc5;
    }
    eax = rd32(arg1 + 0x60u);
    ecx = rd32(arg1 + 0x64u);
    if (ecx == 0u) goto L_100f5cd5;
L_100f5cc5: ;
    if (rd32(sp0 - 0x48u) != eax)
    {
        edx = rd32(sp0 - 0x48u);
        goto L_100f5d02;
    }
    edx = rd32(sp0 - 0x48u);
    if (rd32(sp0 - 0x44u) != ecx) goto L_100f5d02;
L_100f5cd5: ;
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, sp0 + 8u);
    wr32(sp0 - 0x60u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, 2u, sp0 + 8u, 0u);
    t7 = g->edx;
    esi = sp0 - 0x48u;
    edi = rd32(arg1 + 0xa0u);
    ecx = 0x12u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = t7;
    return 0x17u;
L_100f5d02: ;
    eax = 0x16u;
L_100f5d07: ;
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
