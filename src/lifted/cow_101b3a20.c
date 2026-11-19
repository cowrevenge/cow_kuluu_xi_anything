/* f_0x101b3a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b3a20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b3a32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b3a32;
    case 0x101b3a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101b3a4c;
    case 0x101b3a5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101b3a5e;
    case 0x101b3a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_101b3a74;
    case 0x101b3abau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_101b3aba;
    case 0x101b3acau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101b3aca;
    default: break;
    }
#endif

    COW_AT(101b3a20)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101b3aca;
    }
    edx = t2;
    COW_AT(101b3a32)
    t3 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x10u, t3);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t3;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x10u, t5);
    g->ecx = t6;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, t5);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        ecx = t9;
        esi = t5;
        goto L_101b3aba;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    esi = t5;
    COW_AT(101b3a4c)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_stdcall(g, COW_IMG(0x102bc86au), 4, esi, 0u, 0u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        edx = t13;
        edi = t11;
        goto L_101b3a74;
    }
    ecx = t12;
    COW_AT(101b3a5e)
    wr32(sp0 - 0x10u, esi);
    t14 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x14u, t14);
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t15 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t14, esi);
    t16 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t16;
    return 0u;
L_101b3a74: ;
    COW_AT(101b3a74)
    wr32(sp0 - 0x10u, COW_IMG(0x1037c47cu));
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = eax;
    g->ecx = sp0 - 4u;
    g->esp = sp0 - 8u;
    t17 = cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 4u, edi, COW_IMG(0x1037c47cu), rd32(sp0 - 0xcu));
    t18 = g->ecx;
    wr32(sp0 - 0x10u, edi);
    t19 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t19);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x102bc86au), 4, esi, 0u, t19, edi);
    t20 = g->ecx;
    t21 = g->edx;
    t22 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t22);
    t23 = rd32(t22 + 0xcu);
    cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t20, t21, 1, 1, t22);
    t24 = g->edx;
    wr32(sp0 - 0x10u, esi);
    t25 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x14u, t25);
    g->edx = t24;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t25, esi);
    t26 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t26;
    return t23;
L_101b3aba: ;
    COW_AT(101b3aba)
    wr32(sp0 - 0x10u, esi);
    t27 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x14u, t27);
    g->eax = t27;
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t28 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0xcu;
    t29 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t27, esi);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_101b3aca: ;
    COW_AT(101b3aca)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x101b5740u), eax, self, g->edx, 1, 0);
    t32 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t32;
    return t31;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b3a20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b3a32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101b3a4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b3a5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b3a74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b3abau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b3acau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3a20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b3a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
