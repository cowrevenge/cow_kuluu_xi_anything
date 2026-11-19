/* f_0x1014d0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014d0b0(Guest* g)
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
    case 0x1014d0c1u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0c1;
    case 0x1014d0cbu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0cb;
    case 0x1014d0d5u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0d5;
    case 0x1014d0dfu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0df;
    case 0x1014d0e2u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0e2;
    case 0x1014d0e9u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0e9;
    case 0x1014d0f0u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0f0;
    case 0x1014d0f7u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0f7;
    case 0x1014d0fcu: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d0fc;
    case 0x1014d108u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d108;
    case 0x1014d111u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d111;
    case 0x1014d121u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d121;
    case 0x1014d129u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d129;
    case 0x1014d131u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d131;
    case 0x1014d139u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d139;
    case 0x1014d146u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d146;
    case 0x1014d14bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d14b;
    case 0x1014d158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d158;
    case 0x1014d163u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x60u); goto E_1014d163;
    case 0x1014d168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x60u); goto E_1014d168;
    case 0x1014d1b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x60u); goto E_1014d1b8;
    case 0x1014d1c3u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); goto E_1014d1c3;
    default: break;
    }
#endif

    COW_AT(1014d0b0)
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    if (arg1 == 0u) goto L_1014d1c3;
    COW_AT(1014d0c1)
    if (rd8(arg1 + 0xcu) != 1u) goto L_1014d1c3;
    COW_AT(1014d0cb)
    if (rd8(arg1 + 5u) != 1u) goto L_1014d1c3;
    COW_AT(1014d0d5)
    if (rd8(arg1 + 4u) == 9u) goto L_1014d0f7;
    ecx = rd8(arg1 + 4u) - 9u;
    COW_AT(1014d0df)
    if (ecx == 1u) goto L_1014d0f0;
    ecx = ecx - 1u;
    COW_AT(1014d0e2)
    if (ecx != 1u) goto L_1014d1c3;
    COW_AT(1014d0e9)
    ecx = 2u;
L_1014d0fc: ;
    COW_AT(1014d0fc)
    if ((int8_t)rd8(arg1 + 6u) < 0) goto L_1014d1c3;
    ebx = (uint32_t)(int8_t)rd8(arg1 + 6u);
    COW_AT(1014d108)
    if ((int32_t)ebx >= 8) goto L_1014d1c3;
    COW_AT(1014d111)
    if (rd16(arg1 + 0x30u) == 0u) goto L_1014d1c3;
    edx = (in_edx & 0xffff0000u) | rd16(arg1 + 0x30u);
    ebp = rd32(arg1 + 0x38u);
    COW_AT(1014d121)
    if (ebp == 0u) goto L_1014d1c3;
    COW_AT(1014d129)
    wr32(sp0 - 0x60u, in_esi);
    if ((uint16_t)edx != 0xffffu) goto L_1014d146;
    COW_AT(1014d131)
    if (ebp > 0x3b9ac9ffu)
    {
        eax = arg1;
        goto L_1014d1b8;
    }
    COW_AT(1014d139)
    eax = ecx * 3u;
    esi = (in_esi & 0xffff0000u) | rd16(COW_IMG(0x10371a64u) + ecx * 6u);
L_1014d163: ;
    COW_AT(1014d163)
    if ((uint16_t)esi != 0u)
    {
    COW_AT(1014d168)
        wr32(sp0 - 0x64u, in_edi);
        wr32(sp0 - 0x68u, 0x18u);
        wr32(sp0 - 0x6cu, 0xc1u);
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x70u, 9u);
        wr16(sp0 - 0x4cu, (uint16_t)esi);
        wr32(sp0 - 0x48u, ebx + 1u);
        wr32(sp0 - 0x44u, (uint16_t)edx);
        wr32(sp0 - 0x40u, ebp);
        g->eax = eax;
        g->edx = (uint16_t)edx;
        g->esp = sp0 - 0x68u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xc1u);
        t2 = g->edx;
        wr32(sp0 - 0x6cu, t1);
        wr32(sp0 - 0x70u, sp0 - 0x34u);
        g->ecx = sp0 - 0x34u;
        g->esp = sp0 - 0x64u;
        t3 = cow_call_regs(g, COW_IMG(0x10312090u), t1, g->ecx, g->edx, 1, 3, sp0 - 0x34u, t1, 0x18u);
        t4 = g->ecx;
        wr32(sp0 - 0x74u, sp0 - 0x54u);
        g->ebx = ebx + 1u;
        g->esp = sp0 - 0x70u;
        t5 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        eax = t5;
    }
L_1014d1b8: ;
    COW_AT(1014d1b8)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_1014d0f0: ;
    COW_AT(1014d0f0)
    ecx = 1u;
    goto L_1014d0fc;
L_1014d0f7: ;
    COW_AT(1014d0f7)
    ecx = 3u;
    goto L_1014d0fc;
L_1014d146: ;
    COW_AT(1014d146)
    if (ebp != 1u)
    {
    COW_AT(1014d158)
        eax = ecx * 3u;
        esi = (in_esi & 0xffff0000u) | rd16(COW_IMG(0x10371a68u) + ecx * 6u);
    }
    else
    {
    COW_AT(1014d14b)
        eax = arg1;
        esi = (in_esi & 0xffff0000u) | rd16(COW_IMG(0x10371a66u) + ecx * 6u);
    }
    goto L_1014d163;
L_1014d1c3: ;
    COW_AT(1014d1c3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return arg1 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014d0b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014d0c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d0fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d108u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d111u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d121u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d129u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1014d131u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        g->eax = arg1;
        wr32(sp0 - 0x60u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1014d139u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1014d146u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        g->eax = arg1;
        wr32(sp0 - 0x60u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1014d14bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        g->eax = arg1;
        wr32(sp0 - 0x60u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1014d158u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1014d163u:
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
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1014d168u:
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
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1014d1b8u:
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
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1014d1c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
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
void cow_adapter_1014d0b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014d0b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
