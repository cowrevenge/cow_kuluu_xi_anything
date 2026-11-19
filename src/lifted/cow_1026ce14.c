/* f_0x1026ce14 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026ce14(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026ce3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_1026ce3e;
    case 0x1026ce45u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ce45;
    case 0x1026ce4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_1026ce4e;
    case 0x1026ce5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ce5b;
    case 0x1026ce62u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ce62;
    case 0x1026ce6au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_18 = rd32(sp0 - 0x18u); goto E_1026ce6a;
    case 0x1026ce7du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ce7d;
    case 0x1026ce84u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ce84;
    case 0x1026ce97u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ce97;
    case 0x1026ceb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ceb7;
    case 0x1026cecfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026cecf;
    case 0x1026ced6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026ced6;
    case 0x1026cef4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026cef4;
    case 0x1026cefbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026cefb;
    case 0x1026cefeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026cefe;
    case 0x1026cf09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1026cf09;
    default: break;
    }
#endif

    COW_AT(1026ce14)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x1cu, 0xccccccccu);
    wr32(sp0 - 0x18u, 0xccccccccu);
    wr32(sp0 - 0x14u, 0xccccccccu);
    wr32(sp0 - 0x10u, 0xccccccccu);
    wr32(sp0 - 0xcu, 0xccccccccu);
    wr32(sp0 - 8u, 0xccccccccu);
    wr32(sp0 - 0x24u, arg2);
    g->eax = arg2;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329470u)), 1, arg2);   /* ws2_32.dll!gethostbyname */
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1026ce3e)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1026ce45)
    wr32(sp0 - 0x18u, eax);
    if (eax != 0u)
    {
        loc_18 = eax;
    COW_AT(1026ce6a)
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        wr32(sp0 - 0x28u, arg1 + 0x4034u);
        g->eax = eax;
        g->edx = arg1 + 0x4034u;
        g->esp = sp0 - 0x1cu;
        t13 = cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), sp0 - 0x14u, 3, arg1 + 0x4034u, sp0 - 0x14u, rd32(sp0 - 0x20u));
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    COW_AT(1026ce7d)
        if ((int32_t)eax < 0)
        {
    COW_AT(1026cefb)
            eax = 0xffffffffu;
        }
        else
        {
    COW_AT(1026ce84)
            t16 = rd32(sp0 - 0x14u);
            wr32(sp0 - 0x1cu, t16);
            wr32(sp0 - 0x24u, 0x10u);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, t16);
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x10316dd0u), 3, t16, 0u, 0x10u);
    COW_AT(1026ce97)
            t17 = (uint32_t)(int16_t)rd16(rd32(sp0 - 0x18u) + 0xau);
            wr32(sp0 - 0x24u, t17);
            t18 = rd32(rd32(rd32(sp0 - 0x18u) + 0xcu));
            wr32(sp0 - 0x28u, t18);
            t19 = rd32(sp0 - 0x1cu) + 4u;
            wr32(sp0 - 0x2cu, t19);
            g->eax = t18;
            g->ecx = t19;
            g->esp = sp0 - 0x18u;
            t20 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, t19, t18, t17, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
            t21 = g->ecx;
            eax = t20;
            ecx = t21;
    COW_AT(1026ceb7)
            t22 = rd32(sp0 - 0x1cu);
            wr16(t22, 2u);
            t23 = (eax & 0xffff0000u) | (uint16_t)arg3;
            wr32(sp0 - 0x24u, t23);
            g->eax = t23;
            g->ecx = ecx;
            g->edx = t22;
            g->esp = sp0 - 0x20u;
            t24 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t23);   /* ws2_32.dll!htons */
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
    COW_AT(1026cecf)
            g->cf = 0u;
            g->pf = PARITY(0u);
            g->af = 0u;
            g->zf = 1u;
            g->sf = 0u;
            g->of = 0u;
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t27 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
            eax = t27;
    COW_AT(1026ced6)
            t28 = rd32(sp0 - 0x1cu);
            wr16(t28 + 2u, (uint16_t)eax);
            wr32(sp0 - 0xcu, 1u);
            wr32(sp0 - 0x24u, sp0 - 0x14u);
            wr32(sp0 - 0x28u, arg1 + 0x2cu);
            g->edx = sp0 - 0x14u;
            g->esp = sp0 - 0x1cu;
            cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), t28, 3, arg1 + 0x2cu, sp0 - 0x14u, rd32(sp0 - 0x20u));
            t29 = g->ecx;
            t30 = g->edx;
            ecx = t29;
            edx = t30;
    COW_AT(1026cef4)
            eax = 0u;
        }
    }
    else
    {
    COW_AT(1026ce4e)
        wr32(sp0 - 0x24u, COW_IMG(0x103b0fa8u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t7 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0fa8u));   /* kernel32.dll!OutputDebugStringA */
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(1026ce5b)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t10 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(1026ce62)
        eax = 0xffffffffu;
    }
    COW_AT(1026cefe)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    t31 = rd32(sp0 - 0x20u);
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    esi = t31;
    COW_AT(1026cf09)
    g->esi = esi;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026ce14(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026ce3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        wr32(sp0 - 0x14u, 0xccccccccu);
        (void)sp0;
        return 1;
    }
    case 0x1026ce45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026ce4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026ce5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026ce62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026ce6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026ce7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026ce84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026ce97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026ceb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026cecfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026ced6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026cef4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026cefbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026cefeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026cf09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026ce14(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026ce14(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
