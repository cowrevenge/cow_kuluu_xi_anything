/* f_0x10213ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10213ce0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10c0;
    uint32_t loc_10c4;
    uint32_t loc_10c8;
    uint32_t loc_10cc;
    uint32_t sf;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10213d04u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_10213d04;
    case 0x10213d0cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_10213d0c;
    case 0x10213d0fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_10213d0f;
    case 0x10213d14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; loc_10cc = rd32(sp0 - 0x10ccu); loc_10c8 = rd32(sp0 - 0x10c8u); loc_10c4 = rd32(sp0 - 0x10c4u); loc_10c0 = rd32(sp0 - 0x10c0u); goto E_10213d14;
    case 0x10213d25u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; loc_10cc = rd32(sp0 - 0x10ccu); loc_10c8 = rd32(sp0 - 0x10c8u); loc_10c4 = rd32(sp0 - 0x10c4u); loc_10c0 = rd32(sp0 - 0x10c0u); goto E_10213d25;
    case 0x10213d39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; loc_10cc = rd32(sp0 - 0x10ccu); loc_10c8 = rd32(sp0 - 0x10c8u); loc_10c4 = rd32(sp0 - 0x10c4u); loc_10c0 = rd32(sp0 - 0x10c0u); goto E_10213d39;
    case 0x10213d49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213d49;
    case 0x10213d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_10cc = rd32(sp0 - 0x10ccu); loc_10c8 = rd32(sp0 - 0x10c8u); loc_10c4 = rd32(sp0 - 0x10c4u); loc_10c0 = rd32(sp0 - 0x10c0u); goto E_10213d6e;
    case 0x10213dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213dbe;
    case 0x10213dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213dc0;
    case 0x10213dd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213dd7;
    case 0x10213de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213de3;
    case 0x10213e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_10cc = rd32(sp0 - 0x10ccu); loc_10c8 = rd32(sp0 - 0x10c8u); loc_10c4 = rd32(sp0 - 0x10c4u); loc_10c0 = rd32(sp0 - 0x10c0u); goto E_10213e1a;
    case 0x10213e5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213e5c;
    case 0x10213e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213e66;
    case 0x10213e68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_10cc = rd32(sp0 - 0x10ccu); loc_10c8 = rd32(sp0 - 0x10c8u); loc_10c4 = rd32(sp0 - 0x10c4u); loc_10c0 = rd32(sp0 - 0x10c0u); goto E_10213e68;
    case 0x10213eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213eaa;
    case 0x10213eb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213eb4;
    case 0x10213ee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213ee5;
    case 0x10213eedu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_10213eed;
    case 0x10213f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213f0b;
    case 0x10213f12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213f12;
    case 0x10213f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213f19;
    case 0x10213f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213f21;
    case 0x10213f26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213f26;
    case 0x10213f30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_10213f30;
    case 0x10213f57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213f57;
    case 0x10213f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213f94;
    case 0x10213f9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213f9f;
    case 0x10213fa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fa9;
    case 0x10213fabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fab;
    case 0x10213fb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fb2;
    case 0x10213fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fbd;
    case 0x10213fc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fc7;
    case 0x10213fc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fc9;
    case 0x10213fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fd4;
    case 0x10213fdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_10213fde;
    case 0x1021401du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; sf = g->sf; goto E_1021401d;
    case 0x10214024u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; loc_10cc = rd32(sp0 - 0x10ccu); loc_10c8 = rd32(sp0 - 0x10c8u); loc_10c4 = rd32(sp0 - 0x10c4u); loc_10c0 = rd32(sp0 - 0x10c0u); goto E_10214024;
    default: break;
    }
#endif

    COW_AT(10213ce0)
    wr32(sp0 - 0x10c0u, in_ebx);
    wr32(sp0 - 0x10c4u, in_ebp);
    wr32(sp0 - 0x10c8u, in_esi);
    wr32(sp0 - 0x10ccu, in_edi);
    if (rd8(self + 0x114u) == 0u)
    {
        eax = rd8(self + 0x114u);
        goto L_10213eed;
    }
    eax = rd8(self + 0x114u);
    COW_AT(10213d04)
    if (eax == 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        loc_10c0 = in_ebx;
        loc_10c4 = in_ebp;
        loc_10c8 = in_esi;
        loc_10cc = in_edi;
        goto L_10213d14;
    }
    eax = eax - 1u;
    COW_AT(10213d0c)
    if (eax == 1u)
    {
        edx = in_edx;
        loc_10c0 = in_ebx;
        loc_10c4 = in_ebp;
        loc_10c8 = in_esi;
        loc_10cc = in_edi;
        goto L_10213d6e;
    }
    eax = eax - 1u;
    COW_AT(10213d0f)
    edx = in_edx;
    edi = 0u;
    loc_10c0 = in_ebx;
    loc_10c4 = in_ebp;
    loc_10c8 = in_esi;
    loc_10cc = in_edi;
L_10214024: ;
    COW_AT(10214024)
    wr32(sp0 - 0x10d0u, 0x80404040u);
    wr32(sp0 - 0x10d4u, 0u);
    g->esp = sp0 - 0x10ccu;
    cow_fastcall(g, COW_IMG(0x102140a0u), self, edx, 2, 0u, 0x80404040u);
    g->ebx = rd32(sp0 - 0x10c0u);
    g->esi = rd32(sp0 - 0x10c8u);
    g->edi = rd32(sp0 - 0x10ccu);
    g->ebp = rd32(sp0 - 0x10c4u);
    return edi;
L_10213d14: ;
    COW_AT(10213d14)
    if (rd16(self + 0x116u) >= 0x1eu)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x116u);
        goto L_10213e1a;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x116u);
    COW_AT(10213d25)
    if ((int32_t)(uint16_t)eax >= (int32_t)(rd32(self + 0x130u) - 1u))
    {
        eax = (uint16_t)eax;
        goto L_10213e68;
    }
    eax = (uint16_t)eax;
    COW_AT(10213d39)
    wr32(sp0 - 0x10d0u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10ccu;
    t1 = cow_stdcall(g, COW_IMG(0x10216090u), 1, eax);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        edi = 0u;
        goto L_10213ee5;
    }
    eax = t1;
    edx = t2;
    COW_AT(10213d49)
    t3 = rd16(self + 0x118u);
    wr8(self + 0x114u, (uint8_t)(rd8(self + 0x114u) + 1u));
    wr16(self + 0x118u, (uint16_t)(((eax & 0xffff0000u) | t3) + 1u));
    if ((uint16_t)t3 > 0x3cu)
    {
        edx = ((eax & 0xffff0000u) | t3) + 1u;
        eax = (eax & 0xffff0000u) | t3;
        edi = 0u;
        goto L_10213dd7;
    }
    edx = ((eax & 0xffff0000u) | t3) + 1u;
    loc_10c0 = rd32(sp0 - 0x10c0u);
    loc_10c4 = rd32(sp0 - 0x10c4u);
    loc_10c8 = rd32(sp0 - 0x10c8u);
    loc_10cc = rd32(sp0 - 0x10ccu);
L_10213d6e: ;
    COW_AT(10213d6e)
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    t4 = rd16(self + 0x116u);
    wr32(sp0 - 0x10b8u, t4);
    wr32(sp0 - 0x10d0u, t4);
    wr32(sp0 - 0x10b4u, 0u);
    wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x10ccu;
    t5 = cow_call_regs(g, COW_IMG(0x102160a0u), sp0 - 0x10bcu, self, g->edx, 0, 2, sp0 - 0x10bcu, t4);
    t6 = g->edx;
    if ((int32_t)t5 < 0)
    {
        eax = t5;
        edx = t6;
        edi = t5;
        goto L_10213ee5;
    }
    eax = t5;
    edx = t6;
    edi = t5;
    zf = t5 == 0u;
    sf = (int32_t)t5 < 0;
    COW_AT(10213dbe)
    if (!zf && !sf) goto L_10213de3;
    COW_AT(10213dc0)
    t7 = rd16(self + 0x118u);
    wr16(self + 0x118u, (uint16_t)(((eax & 0xffff0000u) | t7) + 1u));
    if ((uint16_t)t7 <= 0x3cu)
    {
        loc_10c0 = rd32(sp0 - 0x10c0u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10cc = rd32(sp0 - 0x10ccu);
        goto L_10213d6e;
    }
    eax = (eax & 0xffff0000u) | t7;
L_10213dd7: ;
    COW_AT(10213dd7)
    wr16(self + 0x118u, 0u);
    loc_10c0 = rd32(sp0 - 0x10c0u);
    loc_10c4 = rd32(sp0 - 0x10c4u);
    loc_10c8 = rd32(sp0 - 0x10c8u);
    loc_10cc = rd32(sp0 - 0x10ccu);
    goto L_10214024;
L_10213de3: ;
    COW_AT(10213de3)
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    g->eax = rd16(self + 0x116u);
    g->edx = sp0 - 0x10bcu;
    t8 = rd16(self + 0x116u);
    g->esp = sp0 - 0x10ccu;
    t9 = cow_thiscall(g, COW_IMG(0x10212120u), rd32(self + t8 * 4u + 0x10u), 1, sp0 - 0x10bcu);
    t10 = g->edx;
    t11 = rd8(self + 0x114u);
    wr16(self + 0x116u, (uint16_t)(rd16(self + 0x116u) + 1u));
    wr8(self + 0x114u, (uint8_t)((uint8_t)t11 - 1u));
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    eax = ((t9 | t11) & 0xffffff00u) | (uint8_t)((uint8_t)t11 - 1u);
    edx = t10;
    loc_10c0 = rd32(sp0 - 0x10c0u);
    loc_10c4 = rd32(sp0 - 0x10c4u);
    loc_10c8 = rd32(sp0 - 0x10c8u);
    loc_10cc = rd32(sp0 - 0x10ccu);
    goto L_10213d14;
L_10213e1a: ;
    COW_AT(10213e1a)
    wr32(sp0 - 0x10d0u, 4u);
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    wr32(sp0 - 0x10b4u, 0u);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    t16 = rd32(COW_IMG(0x10664530u));
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    g->eax = eax;
    g->ecx = t16;
    g->esp = sp0 - 0x10ccu;
    t17 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 4u);
    t18 = g->ecx;
    eax = t17;
    ecx = t18;
    edx = sp0 - 0x10a4u;
L_10213e5c: ;
    COW_AT(10213e5c)
    t19 = rd8(eax);
    wr8(edx, (uint8_t)t19);
    if ((uint8_t)t19 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t19;
        edx = edx + 1u;
        goto L_10213e5c;
    }
    edx = edx + 1u;
    COW_AT(10213e66)
L_10213eb4: ;
    COW_AT(10213eb4)
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    t20 = rd16(self + 0x116u);
    wr32(sp0 - 0x10b8u, t20);
    g->esp = sp0 - 0x10ccu;
    cow_thiscall(g, COW_IMG(0x10212120u), rd32(self + t20 * 4u + 0x10u), 1, sp0 - 0x10bcu);
    t21 = rd32(self + rd16(self + 0x116u) * 4u + 0x10u);
    t22 = rd16(self + 0x116u);
    wr8(t21 + 0x28u, rd8(t21 + 0x28u) | 1u);
    eax = t21;
    edx = t22;
L_1021401d: ;
    COW_AT(1021401d)
    wr16(self + 0x116u, (uint16_t)(rd16(self + 0x116u) + 1u));
    edi = 1u;
    loc_10c0 = rd32(sp0 - 0x10c0u);
    loc_10c4 = rd32(sp0 - 0x10c4u);
    loc_10c8 = rd32(sp0 - 0x10c8u);
    loc_10cc = rd32(sp0 - 0x10ccu);
    goto L_10214024;
L_10213e68: ;
    COW_AT(10213e68)
    wr32(sp0 - 0x10d0u, 4u);
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    wr32(sp0 - 0x10b4u, 0u);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    t12 = rd32(COW_IMG(0x10664530u));
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    g->eax = eax;
    g->ecx = t12;
    g->esp = sp0 - 0x10ccu;
    t13 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 4u);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    edx = sp0 - 0x10a4u;
L_10213eaa: ;
    COW_AT(10213eaa)
    t15 = rd8(eax);
    wr8(edx, (uint8_t)t15);
    if ((uint8_t)t15 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t15;
        edx = edx + 1u;
        goto L_10213eaa;
    }
    edx = edx + 1u;
    goto L_10213eb4;
L_10213ee5: ;
    COW_AT(10213ee5)
    edi = 0xffffffffu;
    loc_10c0 = rd32(sp0 - 0x10c0u);
    loc_10c4 = rd32(sp0 - 0x10c4u);
    loc_10c8 = rd32(sp0 - 0x10c8u);
    loc_10cc = rd32(sp0 - 0x10ccu);
    goto L_10214024;
L_10213eed: ;
    COW_AT(10213eed)
    wr16(self + 0x116u, 0u);
    wr32(self + 0x134u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10ccu;
    t23 = cow_call_regs(g, COW_IMG(0x10216080u), eax, self, g->edx, 1, 0);
    t24 = g->edx;
    wr32(self + 0x130u, t23);
    if ((int32_t)t23 < 0)
    {
        eax = t23;
        edx = t24;
        goto L_10213f57;
    }
    eax = t23;
    edx = t24;
    COW_AT(10213f0b)
    if (eax == 0x7ffffffeu) goto L_10213f57;
    COW_AT(10213f12)
    if (eax == 0x7fffffffu) goto L_10213f57;
    COW_AT(10213f19)
    if ((int32_t)eax <= 0)
    {
        edi = 0u;
        loc_10c0 = rd32(sp0 - 0x10c0u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10cc = rd32(sp0 - 0x10ccu);
    }
    else
    {
    COW_AT(10213f21)
        if ((int32_t)eax > 30)
        {
    COW_AT(10213f26)
            wr32(self + 0x130u, 0x1eu);
        }
    COW_AT(10213f30)
        t25 = rd32(self + 0x130u) + 1u;
        t26 = rd8(self + 0x114u);
        wr32(self + 0x130u, t25);
        wr16(self + 0x118u, 0u);
        wr8(self + 0x114u, (uint8_t)(t26 + 1u));
        eax = (eax & 0xffffff00u) | (uint8_t)(t26 + 1u);
        edi = 0u;
        loc_10c0 = rd32(sp0 - 0x10c0u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10cc = rd32(sp0 - 0x10ccu);
    }
    goto L_10214024;
L_10213f57: ;
    COW_AT(10213f57)
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    wr32(sp0 - 0x10b4u, 0u);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    t27 = rd32(COW_IMG(0x10664530u));
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    if (eax != 0x7ffffffeu)
    {
        ecx = t27;
    COW_AT(10213fab)
        if (eax != 0x7fffffffu)
        {
    COW_AT(10213fc9)
            wr32(sp0 - 0x10d0u, 5u);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x10ccu;
            t34 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 5u);
            t35 = g->ecx;
            eax = t34;
            ecx = t35;
            edx = sp0 - 0x10a4u;
L_10213fd4: ;
    COW_AT(10213fd4)
            t36 = rd8(eax);
            wr8(edx, (uint8_t)t36);
            if ((uint8_t)t36 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t36;
                edx = edx + 1u;
                goto L_10213fd4;
            }
            edx = edx + 1u;
        }
        else
        {
    COW_AT(10213fb2)
            wr32(sp0 - 0x10d0u, 6u);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x10ccu;
            t31 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 6u);
            t32 = g->ecx;
            eax = t31;
            ecx = t32;
            edx = sp0 - 0x10a4u;
L_10213fbd: ;
    COW_AT(10213fbd)
            t33 = rd8(eax);
            wr8(edx, (uint8_t)t33);
            if ((uint8_t)t33 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t33;
                edx = edx + 1u;
                goto L_10213fbd;
            }
            edx = edx + 1u;
    COW_AT(10213fc7)
        }
    }
    else
    {
        ecx = t27;
    COW_AT(10213f94)
        wr32(sp0 - 0x10d0u, 5u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10ccu;
        t28 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 5u);
        t29 = g->ecx;
        eax = t28;
        ecx = t29;
        edx = sp0 - 0x10a4u;
L_10213f9f: ;
    COW_AT(10213f9f)
        t30 = rd8(eax);
        wr8(edx, (uint8_t)t30);
        if ((uint8_t)t30 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t30;
            edx = edx + 1u;
            goto L_10213f9f;
        }
        edx = edx + 1u;
    COW_AT(10213fa9)
    }
    COW_AT(10213fde)
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    t37 = rd16(self + 0x116u);
    wr32(sp0 - 0x10b8u, t37);
    t38 = rd32(self + t37 * 4u + 0x10u);
    g->esp = sp0 - 0x10ccu;
    cow_thiscall(g, COW_IMG(0x10212120u), t38, 1, sp0 - 0x10bcu);
    t39 = g->ecx;
    t40 = rd32(self + rd16(self + 0x116u) * 4u + 0x10u);
    t41 = rd16(self + 0x116u);
    wr8(t40 + 0x29u, (rd8(t40 + 0x29u) & 0xfeu) ^ 1u);
    wr32(self + 0x130u, 0u);
    eax = t40;
    edx = t41;
    goto L_1021401d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10213ce0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10213d04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213d0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213d0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213d14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c0;
        uint32_t loc_10c4;
        uint32_t loc_10c8;
        uint32_t loc_10cc;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_10cc = rd32(sp0 - 0x10ccu);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c0 = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213d25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c0;
        uint32_t loc_10c4;
        uint32_t loc_10c8;
        uint32_t loc_10cc;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_10cc = rd32(sp0 - 0x10ccu);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c0 = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213d39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c0;
        uint32_t loc_10c4;
        uint32_t loc_10c8;
        uint32_t loc_10cc;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        loc_10cc = rd32(sp0 - 0x10ccu);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c0 = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213d49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213d6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c0;
        uint32_t loc_10c4;
        uint32_t loc_10c8;
        uint32_t loc_10cc;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_10cc = rd32(sp0 - 0x10ccu);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c0 = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10213dbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213dc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213dd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213de3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213e1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c0;
        uint32_t loc_10c4;
        uint32_t loc_10c8;
        uint32_t loc_10cc;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_10cc = rd32(sp0 - 0x10ccu);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c0 = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10213e5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10213e66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10213e68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c0;
        uint32_t loc_10c4;
        uint32_t loc_10c8;
        uint32_t loc_10cc;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_10cc = rd32(sp0 - 0x10ccu);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c0 = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->ebp = COW_IMG(0x1033bcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10213eaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10213eb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10213ee5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213eedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213f9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fa9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fc7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213fdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021401du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = 1u;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10214024u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c0;
        uint32_t loc_10c4;
        uint32_t loc_10c8;
        uint32_t loc_10cc;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        loc_10cc = rd32(sp0 - 0x10ccu);
        loc_10c8 = rd32(sp0 - 0x10c8u);
        loc_10c4 = rd32(sp0 - 0x10c4u);
        loc_10c0 = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10213ce0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10213ce0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
