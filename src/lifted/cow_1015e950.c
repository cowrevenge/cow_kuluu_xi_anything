/* f_0x1015e950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1015e950(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015e965u: eax = g->eax; self = g->ecx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e965;
    case 0x1015e96cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e96c;
    case 0x1015e970u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e970;
    case 0x1015e978u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e978;
    case 0x1015e97cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e97c;
    case 0x1015e986u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e986;
    case 0x1015e990u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e990;
    case 0x1015e994u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e994;
    case 0x1015e999u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e999;
    case 0x1015e99du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e99d;
    case 0x1015e9aau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e9aa;
    case 0x1015e9b1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e9b1;
    case 0x1015e9f0u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e9f0;
    case 0x1015e9fau: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e9fa;
    case 0x1015e9fdu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015e9fd;
    case 0x1015ea06u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015ea06;
    case 0x1015ea14u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015ea14;
    case 0x1015ea1au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015ea1a;
    default: break;
    }
#endif

    COW_AT(1015e950)
    if (rd8(COW_IMG(0x103722d8u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x103722d8u));
        goto L_1015ea1a;
    }
    COW_AT(1015e965)
    ecx = self;
    ebx = in_ebx;
    ebp = 0u;
    esi = COW_IMG(0x103722d8u);
    edi = COW_IMG(0x103722d8u);
L_1015e96c: ;
    COW_AT(1015e96c)
    eax = arg2;
L_1015e970: ;
    COW_AT(1015e970)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1015e994;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(eax);
    COW_AT(1015e978)
    if ((uint8_t)ecx == 0u) goto L_1015e990;
    COW_AT(1015e97c)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1015e994;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(1015e986)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1015e970;
    }
L_1015e990: ;
    COW_AT(1015e990)
    eax = 0u;
L_1015e999: ;
    COW_AT(1015e999)
    if (eax == 0u) goto L_1015e9b1;
    COW_AT(1015e99d)
    if (rd8(edi + 0x2cu) != 0u)
    {
        ebp = ebp + 1u;
        esi = edi + 0x2cu;
        edi = edi + 0x2cu;
        goto L_1015e96c;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 0x2cu);
    COW_AT(1015e9aa)
    return eax;
L_1015e994: ;
    COW_AT(1015e994)
    eax = -cf + 1u - cf;
    goto L_1015e999;
L_1015e9b1: ;
    COW_AT(1015e9b1)
    t1 = rd8(COW_IMG(0x10372300u) + ebp * 0x2cu);
    wr8(arg1 + 0x30u, (uint8_t)t1);
    t2 = rd32(COW_IMG(0x103722fcu) + ebp * 0x2cu);
    wr32(arg1 + 0x34u, t2);
    wr8(arg1 + 0x60u, rd8(COW_IMG(0x10372301u) + ebp * 0x2cu));
    wr16(arg1 + 0x38u, rd16(COW_IMG(0x10372302u) + ebp * 0x2cu));
    if (rd32(COW_IMG(0x103722f8u) + ebp * 0x2cu) == 0u)
    {
        eax = rd32(COW_IMG(0x103722f8u) + ebp * 0x2cu);
    COW_AT(1015e9fa)
        wr32(arg1 + 0xcu, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x103722f8u) + ebp * 0x2cu);
    COW_AT(1015e9f0)
        t3 = rd32(eax);
        wr32(arg1 + 0xcu, t3);
        wr32(t3 + 8u, arg1);
        eax = t3;
    }
    COW_AT(1015e9fd)
    if ((rd32(arg1 + 0x34u) & 0x100000u) == 0u) goto L_1015ea14;
    COW_AT(1015ea06)
    wr8(arg1 + 0x99u, 1u);
    return eax;
L_1015ea14: ;
    COW_AT(1015ea14)
    wr8(arg1 + 0x99u, 0u);
L_1015ea1a: ;
    COW_AT(1015ea1a)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015e950(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015e965u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1015e96cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e970u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e978u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e97cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e986u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e990u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e994u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e999u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e99du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e9aau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015e9b1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e9f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e9fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015e9fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015ea06u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1015ea14u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ecx = arg1;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015ea1au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e950(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1015e950(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
