/* f_0x100f9a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_100f9a30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 308u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f9a46u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_100f9a46;
    case 0x100f9a5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9a5b;
    case 0x100f9a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9a65;
    case 0x100f9a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9a72;
    case 0x100f9a79u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9a79;
    case 0x100f9a89u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9a89;
    case 0x100f9a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9a90;
    case 0x100f9acau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9aca;
    case 0x100f9ad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9ad1;
    case 0x100f9adcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9adc;
    case 0x100f9af2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9af2;
    case 0x100f9b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9b00;
    case 0x100f9b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f9b03;
    default: break;
    }
#endif

    COW_AT(100f9a30)
    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    wr32(sp0 - 0x10cu, arg2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x108u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329458u)), 1, arg2);   /* ws2_32.dll!ntohs */
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(100f9a46)
    wr32(sp0 - 0x10cu, (uint16_t)eax);
    wr32(sp0 - 0x110u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = edx;
    g->esp = sp0 - 0x100u;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10352ff0u), (uint16_t)eax, in_edi, in_esi);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(100f9a5b)
    wr32(sp0 - 0x118u, sp0 - 0xfeu);
    g->eax = eax;
    g->ecx = sp0 - 0xfeu;
    g->esp = sp0 - 0x114u;
    t6 = cow_call_regs(g, COW_IMG(0x100f0510u), g->eax, g->ecx, edx, 1, 1, sp0 - 0xfeu);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(100f9a65)
    wr32(sp0 - 0x11cu, arg9);
    g->eax = eax;
    g->esp = sp0 - 0x118u;
    t9 = cow_cdecl(g, COW_IMG(0x100f9940u), 1, arg9);
    eax = t9;
    COW_AT(100f9a72)
    if ((uint8_t)eax == 0u) goto L_100f9ad1;
    COW_AT(100f9a79)
    if (rd32(rd32(COW_IMG(0x104e0af0u)) + 0x15cu) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x15cu);
    }
    else
    {
    COW_AT(100f9a89)
        eax = arg6;
    }
    COW_AT(100f9a90)
    wr32(sp0 - 0x10cu, arg10);
    wr32(sp0 - 0x110u, arg9);
    wr32(sp0 - 0x114u, arg8);
    wr32(sp0 - 0x118u, arg5);
    wr32(sp0 - 0x11cu, arg4);
    wr32(sp0 - 0x120u, eax);
    wr32(sp0 - 0x124u, arg3);
    wr32(sp0 - 0x128u, arg2);
    wr32(sp0 - 0x12cu, arg1);
    wr32(sp0 - 0x130u, 0u);
    g->eax = arg3;
    g->ecx = arg1;
    g->esp = sp0 - 0x108u;
    t10 = cow_cdecl(g, COW_IMG(0x100f9eb0u), 10, 0u, arg1, arg2, arg3, eax, arg4, arg5, arg8, arg9, arg10);
    t11 = g->ecx;
    eax = t10;
    ecx = t11;
    COW_AT(100f9aca)
    if ((uint8_t)eax == 1u) goto L_100f9adc;
L_100f9ad1: ;
    COW_AT(100f9ad1)
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    return eax & 0xffffff00u;
L_100f9adc: ;
    COW_AT(100f9adc)
    if (rd8(rd32(COW_IMG(0x104e0af0u)) + 0x140u) != 0u)
    {
        eax = rd32(COW_IMG(0x104e0af0u)) + 0x140u;
        edx = rd32(COW_IMG(0x104e0af0u));
    COW_AT(100f9af2)
        wr32(sp0 - 0x10cu, eax);
        t12 = rd32(rd32(COW_IMG(0x104dfd94u)));
        wr32(sp0 - 0x110u, t12);
        g->esp = sp0 - 0x104u;
        cow_cdecl(g, COW_IMG(0x100fa150u), 3, t12, eax, rd32(sp0 - 0x108u));
    COW_AT(100f9b00)
    }
    COW_AT(100f9b03)
    t13 = rd32(rd32(COW_IMG(0x104dfd94u)));
    t14 = rd32(sp0 - 0x104u);
    t15 = rd32(sp0 - 0x108u);
    wr32(COW_IMG(0x104dfd98u), t13);
    g->esi = t14;
    g->edi = t15;
    return (t13 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f9a30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f9a46u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x108u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f9a5bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x114u;
        g->esi = arg2;
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100f9a65u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg2;
        wr32(sp0 - 0x118u, sp0 - 0xfeu);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100f9a72u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x11cu;
        g->esi = arg2;
        g->edi = arg9;
        wr32(sp0 - 0x118u, sp0 - 0xfeu);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100f9a79u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x108u;
        g->esi = arg2;
        g->edi = arg9;
        wr32(sp0 - 0x118u, sp0 - 0xfeu);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100f9a89u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x108u;
        g->esi = arg2;
        g->edi = arg9;
        wr32(sp0 - 0x118u, sp0 - 0xfeu);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100f9a90u:
    {
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x108u;
        g->esi = arg2;
        g->edi = arg9;
        wr32(sp0 - 0x118u, sp0 - 0xfeu);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100f9acau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100f9ad1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x100f9adcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x100f9af2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x100f9b00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x100f9b03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9a30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f9a30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
