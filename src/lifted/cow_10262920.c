/* f_0x10262920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262920(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10262939u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10262939;
    case 0x10262944u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10262944;
    case 0x1026295bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1026295b;
    case 0x1026296du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1026296d;
    case 0x10262976u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10262976;
    case 0x10262983u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10262983;
    case 0x10262992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10262992;
    case 0x10262996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10262996;
    case 0x102629b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_102629b4;
    case 0x102629bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_102629bc;
    case 0x102629c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_102629c4;
    case 0x102629ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_102629cc;
    case 0x102629d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_4 = rd32(sp0 - 4u); goto E_102629d0;
    case 0x102629deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_102629de;
    case 0x102629ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_102629ec;
    default: break;
    }
#endif

    COW_AT(10262920)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 8u, 0u);
    if (rd32(sp0 + 8u) == 0u)
    {
        ebp = rd32(sp0 + 8u);
        goto L_1026295b;
    }
    ebp = rd32(sp0 + 8u);
    COW_AT(10262939)
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x1026a530u), ebp, 0);
    t2 = g->edx;
    if (t1 != 0u) goto L_1026295b;
    edx = t2;
    COW_AT(10262944)
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x10262790u), self, edx, 2, arg1, ebp);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return t3;
L_1026295b: ;
    COW_AT(1026295b)
    wr32(sp0 - 4u, 0x80040207u);
    wr32(sp0 + 8u, 0u);
    eax = 0u;
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
    loc_8 = 0u;
    loc_4 = 0x80040207u;
L_1026296d: ;
    COW_AT(1026296d)
    if (eax != rd8(self + 0x26u))
    {
    COW_AT(10262983)
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, self + 0xcu);
        g->eax = self + 0xcu;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall(g, rd32(rd32(self + 0xcu) + 0x30u), rd32(self + 0xcu), 2, self + 0xcu, sp0 - 8u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    else
    {
        ecx = rd8(self + 0x26u);
    COW_AT(10262976)
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, arg1);
        g->eax = sp0 - 8u;
        g->edx = rd32(arg1);
        t4 = rd32(arg1);
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, rd32(t4 + 0x30u), ecx, 2, arg1, sp0 - 8u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    COW_AT(10262992)
    if ((int32_t)eax < 0)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_102629d0;
    }
    COW_AT(10262996)
    t9 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t9);
    wr32(sp0 - 0x20u, ebp);
    wr32(sp0 - 0x24u, arg1);
    g->eax = t9;
    g->esp = sp0 - 0x18u;
    t10 = cow_fastcall(g, COW_IMG(0x10262840u), self, edx, 3, arg1, ebp, t9);
    t11 = g->edx;
    t12 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t12);
    cow_thiscall(g, rd32(rd32(t12) + 8u), rd32(t12), 1, t12);
    if ((int32_t)t10 >= 0) goto L_102629ec;
    esi = t10;
    COW_AT(102629b4)
    if (esi == 0x80004005u)
    {
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
    COW_AT(102629bc)
        if (esi == 0x80070057u)
        {
            loc_4 = rd32(sp0 - 4u);
        }
        else
        {
    COW_AT(102629c4)
            if (esi == 0x8004022au)
            {
                loc_4 = rd32(sp0 - 4u);
            }
            else
            {
    COW_AT(102629cc)
                wr32(sp0 - 4u, esi);
                loc_4 = esi;
            }
        }
    }
L_102629d0: ;
    COW_AT(102629d0)
    t13 = rd32(sp0 + 8u) + 1u;
    t14 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t13);
    if ((int32_t)(t14 + 1u) < 2)
    {
        eax = t13;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        goto L_1026296d;
    }
    COW_AT(102629de)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return loc_4;
L_102629ec: ;
    COW_AT(102629ec)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10262920(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10262939u:
    {
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10262944u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1026295bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1026296du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262976u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262983u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262992u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10262996u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102629b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102629bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102629c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102629ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102629d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102629deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102629ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10262920(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10262920(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
