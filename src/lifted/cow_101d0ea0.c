/* f_0x101d0ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d0ea0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 576u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d0eb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_ebx = rd32(sp0 - 0x204u); g->ebx = rd32(sp0 - 0x204u); goto E_101d0eb2;
    case 0x101d0eb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101d0eb8;
    case 0x101d0ec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101d0ec5;
    case 0x101d0f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f2d;
    case 0x101d0f32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f32;
    case 0x101d0f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f38;
    case 0x101d0f47u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f47;
    case 0x101d0f4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f4f;
    case 0x101d0f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f55;
    case 0x101d0f5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f5a;
    case 0x101d0f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f60;
    case 0x101d0f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f68;
    case 0x101d0f72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f72;
    case 0x101d0f89u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f89;
    case 0x101d0f97u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0f97;
    case 0x101d0fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0fa4;
    case 0x101d0fafu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0faf;
    case 0x101d0fb4u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0fb4;
    case 0x101d0fbcu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0fbc;
    case 0x101d0fc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0fc4;
    case 0x101d0fdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0fdb;
    case 0x101d0fe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0fe8;
    case 0x101d0ff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0ff3;
    default: break;
    }
#endif

    COW_AT(101d0ea0)
    wr32(sp0 - 0x204u, in_ebx);
    wr8(sp0 - 0x200u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x204u;
    t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101d0eb2)
    wr32(sp0 - 0x208u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1fcu;
    t4 = cow_cdecl(g, COW_IMG(0x101c8d10u), 3, eax, in_ebx, rd32(sp0 - 0x200u));
    eax = t4;
    COW_AT(101d0eb8)
    if (eax == 0u)
    {
        ecx = eax;
        esi = in_esi;
    }
    else
    {
        ecx = eax;
    COW_AT(101d0ec5)
        wr32(sp0 - 0x208u, in_esi);
        t5 = cow_divs(g, (uint32_t)(int8_t)rd8(COW_IMG(0x1066317au)), 0xau);
        t6 = cow_mods(g, (uint32_t)(int8_t)rd8(COW_IMG(0x1066317au)), 0xau);
        wr32(sp0 - 0x20cu, t6 + 0x61u);
        wr32(sp0 - 0x210u, rd32(ecx));
        t7 = rd32(ecx + 4u);
        wr32(sp0 - 0x214u, t7);
        t8 = rd32(ecx + 8u);
        wr32(sp0 - 0x218u, t8);
        t9 = rd32(ecx + 0xcu);
        wr32(sp0 - 0x21cu, t9);
        t10 = rd32(ecx + 0x10u) + 1u;
        wr32(sp0 - 0x220u, t10);
        t11 = cow_divs(g, rd32(ecx + 0x14u) + 0x76cu, 0x64u);
        t12 = cow_mods(g, rd32(ecx + 0x14u) + 0x76cu, 0x64u);
        wr32(sp0 - 0x224u, t12);
        t13 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x3c3a6u);
        wr32(sp0 - 0x228u, t13);
        t14 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x3c3a5u);
        wr32(sp0 - 0x22cu, t14);
        t15 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u);
        wr32(sp0 - 0x230u, t15);
        wr32(sp0 - 0x234u, COW_IMG(0x1037e8b8u));
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        g->ebx = 0u;
        g->eax = sp0 - 0x200u;
        g->ecx = t14;
        g->edx = t15;
        g->esp = sp0 - 0x224u;
        t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x1037e8b8u), t15, t14, t13);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(101d0f2d)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x238u;
        t19 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(101d0f32)
        wr32(sp0 - 0x23cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x238u;
        t22 = cow_cdecl(g, COW_IMG(0x10103b30u), 1, eax);
        t23 = g->edx;
        eax = t22;
        edx = t23;
    COW_AT(101d0f38)
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x1037e862u)) != eax)
        {
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x1037e862u));
            esi = rd32(sp0 - 0x208u);
    COW_AT(101d0f4f)
            wr8(COW_IMG(0x1066317au), 0u);
        }
        else
        {
            ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x1037e862u));
            esi = rd32(sp0 - 0x208u);
    COW_AT(101d0f47)
            t24 = rd8(COW_IMG(0x1066317au));
            wr8(COW_IMG(0x1066317au), (uint8_t)(t24 + 1u));
        }
    COW_AT(101d0f55)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x204u;
        t25 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
        t26 = g->ecx;
        t27 = g->edx;
        eax = t25;
        ecx = t26;
        edx = t27;
    COW_AT(101d0f5a)
        wr32(sp0 - 0x208u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x204u;
        t28 = cow_cdecl(g, COW_IMG(0x10103b30u), 1, eax);
        t29 = g->ecx;
        eax = t28;
        ecx = t29;
    COW_AT(101d0f60)
        wr8(COW_IMG(0x1037e862u), (uint8_t)eax);
    }
    COW_AT(101d0f68)
    t30 = rd8(sp0 - 0x200u);
    if ((uint8_t)t30 == 0u) goto L_101d0ff3;
    COW_AT(101d0f72)
    wr32(sp0 - 0x208u, sp0 - 0x200u);
    wr32(sp0 - 0x20cu, COW_IMG(0x1037e8b0u));
    wr32(sp0 - 0x210u, sp0 - 0x100u);
    g->ebx = 0u;
    g->ecx = ecx;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x1fcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037e8b0u), sp0 - 0x200u, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    t31 = g->ecx;
    t32 = g->edx;
    ecx = t31;
    edx = t32;
    COW_AT(101d0f89)
    if (arg1 != 0u) goto L_101d0faf;
    COW_AT(101d0f97)
    wr32(sp0 - 0x208u, sp0 - 0x100u);
    g->ebx = 0u;
    g->eax = arg1;
    g->esp = sp0 - 0x204u;
    t33 = cow_cdecl(g, COW_IMG(0x101d1000u), 1, sp0 - 0x100u);
    eax = t33;
    COW_AT(101d0fa4)
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = esi;
    return eax;
L_101d0faf: ;
    COW_AT(101d0faf)
    if (arg1 != 1u)
    {
        eax = arg1;
        goto L_101d0ff3;
    }
    COW_AT(101d0fb4)
    t34 = rd8(COW_IMG(0x10456ae0u));
    if ((uint8_t)t34 == 0u)
    {
        eax = arg1;
        goto L_101d0ff3;
    }
    COW_AT(101d0fbc)
    t35 = rd32(COW_IMG(0x10456a84u));
    if (t35 == 0u)
    {
        eax = arg1;
        goto L_101d0ff3;
    }
    COW_AT(101d0fc4)
    wr32(sp0 - 0x208u, sp0 - 0x200u);
    wr32(sp0 - 0x20cu, COW_IMG(0x1037e89cu));
    wr32(sp0 - 0x210u, sp0 - 0x100u);
    g->ebx = 0u;
    g->eax = sp0 - 0x100u;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x1fcu;
    t36 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037e89cu), sp0 - 0x200u, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(101d0fdb)
    wr32(sp0 - 0x214u, sp0 - 0x100u);
    g->ebx = 0u;
    g->esi = esi;
    g->eax = eax;
    g->esp = sp0 - 0x210u;
    t38 = cow_cdecl(g, COW_IMG(0x101d1100u), 1, sp0 - 0x100u);
    eax = t38;
    COW_AT(101d0fe8)
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = esi;
    return eax;
L_101d0ff3: ;
    COW_AT(101d0ff3)
    g->ebx = rd32(sp0 - 0x204u);
    g->esi = esi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d0ea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d0eb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_ebx = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d0eb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x208u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d0ec5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d0f2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x238u;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x238u;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x208u;
        g->ebx = 0u;
        wr32(sp0 - 0x238u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d0f72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d0f89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x210u;
        g->ebx = 0u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0f97u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->eax = arg1;
        g->ebx = 0u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0fa4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101d0fafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->eax = arg1;
        g->ebx = 0u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0fb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->eax = arg1;
        g->ebx = 0u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0fbcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->eax = arg1;
        g->ebx = 0u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0fc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0fdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x210u;
        g->ebx = 0u;
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0fe8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x214u, sp0 - 0x100u);
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x208u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101d0ff3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0ea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d0ea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
