/* f_0x1012f2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1012f2a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012f2b1u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2b1;
    case 0x1012f2bbu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2bb;
    case 0x1012f2c5u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2c5;
    case 0x1012f2d1u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2d1;
    case 0x1012f2dau: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2da;
    case 0x1012f2eau: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2ea;
    case 0x1012f2f2u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2f2;
    case 0x1012f2fau: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f2fa;
    case 0x1012f302u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f302;
    case 0x1012f309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f309;
    case 0x1012f317u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f317;
    case 0x1012f367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f367;
    case 0x1012f372u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_1012f372;
    default: break;
    }
#endif

    COW_AT(1012f2a0)
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    if (arg1 == 0u) goto L_1012f372;
    COW_AT(1012f2b1)
    if (rd8(arg1 + 0xcu) != 1u) goto L_1012f372;
    COW_AT(1012f2bb)
    if (rd8(arg1 + 5u) != 2u) goto L_1012f372;
    COW_AT(1012f2c5)
    if ((int8_t)rd8(arg1 + 6u) < 0) goto L_1012f372;
    ebp = (uint32_t)(int8_t)rd8(arg1 + 6u);
    COW_AT(1012f2d1)
    if ((int32_t)ebp >= 8) goto L_1012f372;
    COW_AT(1012f2da)
    if (rd16(arg1 + 0x30u) == 0u) goto L_1012f372;
    edx = (in_edx & 0xffff0000u) | rd16(arg1 + 0x30u);
    esi = rd32(arg1 + 0x38u);
    COW_AT(1012f2ea)
    if (esi == 0u) goto L_1012f372;
    COW_AT(1012f2f2)
    wr32(sp0 - 0x60u, in_ebx);
    if ((uint16_t)edx != 0xffffu) goto L_1012f309;
    COW_AT(1012f2fa)
    if (esi > 0x3b9ac9ffu)
    {
        eax = arg1;
        goto L_1012f367;
    }
    COW_AT(1012f302)
    ebx = 0xbeu;
L_1012f317: ;
    COW_AT(1012f317)
    wr32(sp0 - 0x64u, in_edi);
    wr32(sp0 - 0x68u, 0x18u);
    wr32(sp0 - 0x6cu, 0xc0u);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x70u, 9u);
    wr16(sp0 - 0x4cu, (uint16_t)ebx);
    wr32(sp0 - 0x48u, ebp + 1u);
    wr32(sp0 - 0x44u, (uint16_t)edx);
    wr32(sp0 - 0x40u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = (uint16_t)edx;
    g->esp = sp0 - 0x68u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xc0u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x6cu, t1);
    wr32(sp0 - 0x70u, sp0 - 0x34u);
    g->edx = t3;
    g->esp = sp0 - 0x64u;
    t4 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x34u, g->ecx, g->edx, 1, 3, sp0 - 0x34u, t1, 0x18u);
    t5 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x54u);
    g->ebx = ebx;
    g->esp = sp0 - 0x70u;
    t6 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    eax = t6;
L_1012f367: ;
    COW_AT(1012f367)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_1012f309: ;
    COW_AT(1012f309)
    ebx = (esi != 1u) + 0xc1u;
    goto L_1012f317;
L_1012f372: ;
    COW_AT(1012f372)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return arg1 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012f2a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012f2b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f2bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f2c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f2d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f2dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f2eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f2f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f2fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012f302u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1012f309u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1012f317u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1012f367u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1012f372u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f2a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012f2a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
