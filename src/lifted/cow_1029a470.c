/* f_0x1029a470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1029a470(Guest* g)
{
    uint32_t af;
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t of;
    uint32_t pf;
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
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 204u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029a486u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa0u); goto E_1029a486;
    case 0x1029a48du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a48d;
    case 0x1029a4a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a4a4;
    case 0x1029a4b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_94 = rd32(sp0 - 0x94u); goto E_1029a4b4;
    case 0x1029a4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a4ba;
    case 0x1029a4bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_94 = rd32(sp0 - 0x94u); goto E_1029a4bd;
    case 0x1029a4cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a4ca;
    case 0x1029a4d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a4d9;
    case 0x1029a4e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a4e1;
    case 0x1029a501u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_9c = rd32(sp0 - 0x9cu); goto E_1029a501;
    case 0x1029a51au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a51a;
    case 0x1029a54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a54e;
    case 0x1029a571u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a571;
    case 0x1029a57du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a57d;
    case 0x1029a581u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_98 = rd32(sp0 - 0x98u); goto E_1029a581;
    case 0x1029a59du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a59d;
    case 0x1029a5b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_98 = rd32(sp0 - 0x98u); goto E_1029a5b0;
    case 0x1029a5bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a5bc;
    case 0x1029a5d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a5d2;
    case 0x1029a5d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a5d7;
    case 0x1029a5ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a5ec;
    case 0x1029a604u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a604;
    case 0x1029a609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a609;
    case 0x1029a61eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a61e;
    case 0x1029a631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a631;
    case 0x1029a639u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a639;
    case 0x1029a64eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a64e;
    case 0x1029a655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a655;
    case 0x1029a66cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a66c;
    case 0x1029a67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a67c;
    case 0x1029a686u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a686;
    case 0x1029a69fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_9c = rd32(sp0 - 0x9cu); goto E_1029a69f;
    case 0x1029a6a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_9c = rd32(sp0 - 0x9cu); goto E_1029a6a9;
    case 0x1029a6b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_9c = rd32(sp0 - 0x9cu); goto E_1029a6b0;
    case 0x1029a6c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a6c0;
    case 0x1029a6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_9c = rd32(sp0 - 0x9cu); goto E_1029a6cd;
    case 0x1029a6e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1029a6e8;
    case 0x1029a6feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_a0 = rd32(sp0 - 0xa0u); goto E_1029a6fe;
    default: break;
    }
#endif

    COW_AT(1029a470)
    wr32(sp0 - 0xa0u, in_edi);
    if (arg1 == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        loc_a0 = in_edi;
    }
    else
    {
    COW_AT(1029a486)
        wr32(sp0 - 0xa4u, in_ebx);
        wr32(sp0 - 0xa8u, in_esi);
        g->eax = in_eax;
        g->esp = sp0 - 0xa8u;
        t1 = cow_fastcall(g, COW_IMG(0x102750b0u), self, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1029a48d)
        wr32(sp0 - 0xacu, 0x216u);
        wr32(sp0 - 0xb0u, COW_IMG(0x103bc310u));
        wr32(sp0 - 0xb4u, 0x40u);
        wr32(sp0 - 0xb8u, 1u);
        wr32(sp0 - 0x8cu, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x94u;
        t4 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, 0x40u, COW_IMG(0x103bc310u), 0x216u, rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(1029a4a4)
        wr32(sp0 - 0x94u, eax);
        if (rd32(arg1 + 0x1cu) == 0u)
        {
            ebx = eax;
            loc_94 = eax;
            eax = rd32(arg1 + 0x1cu);
        }
        else
        {
            ebx = eax;
            loc_94 = eax;
            eax = rd32(arg1 + 0x1cu);
    COW_AT(1029a4b4)
            wr32(sp0 - 0xacu, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xa8u;
            t7 = cow_cdecl(g, COW_IMG(0x1027c9f0u), 1, eax);
            t8 = g->ecx;
            t9 = g->edx;
            eax = t7;
            ecx = t8;
            edx = t9;
    COW_AT(1029a4ba)
            loc_94 = rd32(sp0 - 0x94u);
        }
    COW_AT(1029a4bd)
        wr32(sp0 - 0xacu, in_ebp);
        t10 = rd32(arg1 + 0x3cu);
        wr32(sp0 - 0x84u, t10);
        g->eax = eax;
        g->esp = sp0 - 0xacu;
        t11 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
        t12 = g->edx;
        eax = t11;
        edx = t12;
        esi = t10;
    COW_AT(1029a4ca)
        t13 = rd32(rd32(arg1 + 0x24u) + 0x14u);
        wr32(sp0 - 0xb0u, t13);
        wr32(sp0 - 0xb4u, ebx);
        g->eax = rd32(arg1 + 0x24u);
        g->ecx = t13;
        g->edx = edx;
        t14 = rd32(arg1 + 0x24u);
        g->esp = sp0 - 0xacu;
        t15 = cow_cdecl(g, COW_IMG(0x1027f100u), 2, ebx, t13);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
        ebp = eax;
        eax = t15;
    COW_AT(1029a4d9)
        g->eax = eax;
        g->esp = sp0 - 0xacu;
        t18 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    COW_AT(1029a4e1)
        wr32(sp0 - 0x9cu, 0u);
        t20 = eax + rd32(COW_IMG(0x109a2830u)) - ebp;
        wr32(COW_IMG(0x109a2830u), t20);
        if ((int32_t)esi <= 0)
        {
            ecx = t20;
            goto L_1029a69f;
        }
        loc_9c = 0u;
L_1029a501: ;
    COW_AT(1029a501)
        t21 = rd32(rd32(loc_9c * 4u + rd32(arg1 + 0x38u)) + 0x30u);
        wr32(sp0 - 0x88u, t21);
        g->eax = loc_9c;
        t22 = rd32(rd32(loc_9c * 4u + rd32(arg1 + 0x38u)) + 0x50u);
        t23 = rd32(loc_9c * 4u + rd32(arg1 + 0x38u));
        g->esp = sp0 - 0xacu;
        t24 = cow_stdcall(g, COW_IMG(0x102aeeb0u), 0);
        eax = t24;
        ebp = t22;
        esi = t23;
    COW_AT(1029a51a)
        wr32(esi + 0x54u, eax);
        wr32(eax + 0x14u, ebx);
        t25 = rd32(rd32(arg1 + 0x24u) + 0x28u);
        wr32(rd32(esi + 0x54u) + 0x28u, t25);
        t26 = rd32(rd32(arg1 + 0x24u) + 0x18u);
        wr32(rd32(esi + 0x54u) + 0x18u, t26);
        t27 = rd32(rd32(arg1 + 0x24u) + 0x20u);
        wr32(rd32(esi + 0x54u) + 0x20u, t27);
        if (rd32(rd32(esi + 0x54u) + 0x20u) == 0u)
        {
            ecx = t27;
            edx = rd32(esi + 0x54u);
        }
        else
        {
    COW_AT(1029a54e)
            wr32(sp0 - 0xb0u, 0x22eu);
            wr32(sp0 - 0xb4u, COW_IMG(0x103bc310u));
            wr32(sp0 - 0xb8u, ebp * 0xcu);
            wr32(sp0 - 0xbcu, 1u);
            t28 = rd32(rd32(arg1 + 0x24u) + 0x20u);
            wr32(sp0 - 0x90u, t28);
            g->eax = rd32(arg1 + 0x24u);
            g->ecx = t28;
            g->edx = ebp * 0xcu;
            t29 = rd32(arg1 + 0x24u);
            g->esp = sp0 - 0x98u;
            t30 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ebp * 0xcu, COW_IMG(0x103bc310u), 0x22eu, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
            t31 = g->ecx;
            t32 = g->edx;
            eax = t30;
            ecx = t31;
            edx = t32;
    COW_AT(1029a571)
            wr32(esi + 0x40u, eax);
            if ((int32_t)ebp > 0)
            {
    COW_AT(1029a57d)
                wr32(sp0 - 0x98u, eax);
                ebx = 0u;
                loc_98 = eax;
L_1029a581: ;
    COW_AT(1029a581)
                t33 = rd32(sp0 - 0x90u) + rd32(ebx * 4u + rd32(sp0 - 0x88u)) * 0xcu;
                wr32(sp0 - 0xb0u, t33);
                wr32(sp0 - 0xb4u, loc_98);
                g->edx = rd32(sp0 - 0x90u);
                t34 = rd32(sp0 - 0x90u);
                g->esp = sp0 - 0xacu;
                cow_cdecl(g, COW_IMG(0x10274670u), 2, loc_98, t33);
                t35 = g->edx;
                edx = t35;
    COW_AT(1029a59d)
                t36 = rd32(sp0 - 0x98u) + 0xcu;
                wr32(sp0 - 0x98u, t36);
                if ((int32_t)(ebx + 1u) < (int32_t)ebp)
                {
                    ebx = ebx + 1u;
                    loc_98 = t36;
                    goto L_1029a581;
                }
                ecx = t36;
            }
        }
    COW_AT(1029a5b0)
        t37 = rd32(esi + 0x54u);
        wr32(t37 + 0x34u, rd32(t37 + 0x34u) & 0xfffffffau);
        g->eax = t37;
        g->esp = sp0 - 0xacu;
        t38 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
        t39 = g->ecx;
        eax = t38;
        ecx = t39;
    COW_AT(1029a5bc)
        t40 = rd32(esi + 0x9cu) + 0x24u;
        wr32(sp0 - 0xb0u, t40);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        g->eax = sp0 - 0x80u;
        g->ecx = ecx;
        g->edx = t40;
        g->esp = sp0 - 0xacu;
        t41 = cow_cdecl(g, COW_IMG(0x1027f100u), 2, sp0 - 0x80u, t40);
        t42 = g->ecx;
        t43 = g->edx;
        ecx = t42;
        edx = t43;
        ebx = eax;
        eax = t41;
    COW_AT(1029a5d2)
        g->eax = eax;
        g->esp = sp0 - 0xb4u;
        t44 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
        t45 = g->edx;
        eax = t44;
        edx = t45;
    COW_AT(1029a5d7)
        t46 = eax + rd32(COW_IMG(0x109a2830u)) - ebx;
        wr32(COW_IMG(0x109a2830u), t46);
        g->eax = eax - ebx;
        g->esp = sp0 - 0xb4u;
        t47 = cow_fastcall(g, COW_IMG(0x102750b0u), t46, edx, 0);
        eax = t47;
    COW_AT(1029a5ec)
        t48 = rd32(rd32(arg1 + 0x24u) + 0x14u);
        wr32(sp0 - 0xb8u, t48);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        g->eax = sp0 - 0x80u;
        g->ecx = sp0 - 0x40u;
        g->edx = t48;
        g->esp = sp0 - 0xb4u;
        t49 = cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x40u, sp0 - 0x80u, t48);
        t50 = g->ecx;
        t51 = g->edx;
        ecx = t50;
        edx = t51;
        ebx = eax;
        eax = t49;
    COW_AT(1029a604)
        g->eax = eax;
        g->esp = sp0 - 0xc0u;
        t52 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
        t53 = g->edx;
        eax = t52;
        edx = t53;
    COW_AT(1029a609)
        t54 = eax + rd32(COW_IMG(0x109a2834u)) - ebx;
        wr32(COW_IMG(0x109a2834u), t54);
        g->eax = eax - ebx;
        t55 = rd32(COW_IMG(0x109a2834u));
        g->esp = sp0 - 0xc0u;
        t56 = cow_fastcall(g, COW_IMG(0x102750b0u), t54, edx, 0);
        t57 = g->ecx;
        eax = t56;
        ecx = t57;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
    COW_AT(1029a61e)
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, esi + 0x5cu);
        g->cf = cf;
        g->pf = pf;
        g->af = af;
        g->zf = zf;
        g->sf = sf;
        g->of = of;
        g->eax = esi + 0x5cu;
        g->ecx = ecx;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0xb4u;
        t58 = cow_cdecl(g, COW_IMG(0x1027eb30u), 5, esi + 0x5cu, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0x80u, rd32(sp0 - 0xb8u));
        t59 = g->ecx;
        t60 = g->edx;
        ecx = t59;
        edx = t60;
        ebx = eax;
        eax = t58;
    COW_AT(1029a631)
        g->eax = eax;
        g->esp = sp0 - 0xacu;
        t61 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
        t62 = g->edx;
        eax = t61;
        edx = t62;
    COW_AT(1029a639)
        t63 = eax + rd32(COW_IMG(0x109a2838u)) - ebx;
        wr32(COW_IMG(0x109a2838u), t63);
        g->eax = eax - ebx;
        g->esp = sp0 - 0xacu;
        t64 = cow_fastcall(g, COW_IMG(0x102750b0u), t63, edx, 0);
        t65 = g->ecx;
        t66 = g->edx;
        eax = t64;
        ecx = t65;
        edx = t66;
    COW_AT(1029a64e)
        g->eax = eax;
        g->esp = sp0 - 0xacu;
        t67 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
        t68 = g->ecx;
        ecx = t68;
        ebx = eax;
        eax = t67;
    COW_AT(1029a655)
        t69 = eax + rd32(COW_IMG(0x109a283cu)) - ebx;
        wr32(COW_IMG(0x109a283cu), t69);
        if (rd32(esi + 0x3cu) == 0u)
        {
            edx = t69;
        }
        else
        {
            eax = rd32(esi + 0x3cu);
            edx = t69;
    COW_AT(1029a66c)
            wr32(sp0 - 0xb0u, 0x249u);
            wr32(sp0 - 0xb4u, COW_IMG(0x103bc310u));
            wr32(sp0 - 0xb8u, eax);
            g->edx = edx;
            g->esp = sp0 - 0xacu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bc310u), 0x249u);
            t70 = g->edx;
            edx = t70;
    COW_AT(1029a67c)
            wr32(esi + 0x3cu, 0u);
        }
    COW_AT(1029a686)
        t71 = rd32(sp0 - 0x9cu) + 1u;
        t72 = rd32(sp0 - 0x9cu);
        wr32(sp0 - 0x9cu, t71);
        if ((int32_t)(t72 + 1u) < (int32_t)rd32(sp0 - 0x84u))
        {
            ebx = rd32(sp0 - 0x94u);
            loc_9c = t71;
            goto L_1029a501;
        }
        ecx = rd32(sp0 - 0x84u);
        ebx = rd32(sp0 - 0x94u);
L_1029a69f: ;
    COW_AT(1029a69f)
        if ((rd8(rd32(arg1 + 0x24u) + 0x34u) & 4u) == 0u)
        {
            ebp = rd32(sp0 - 0xacu);
        }
        else
        {
            eax = rd32(arg1 + 0x24u);
            ebp = rd32(sp0 - 0xacu);
    COW_AT(1029a6a9)
            if (rd32(eax + 0x14u) != 0u)
            {
                eax = rd32(eax + 0x14u);
    COW_AT(1029a6b0)
                wr32(sp0 - 0xacu, 0x250u);
                wr32(sp0 - 0xb0u, COW_IMG(0x103bc310u));
                wr32(sp0 - 0xb4u, eax);
                g->esp = sp0 - 0xa8u;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bc310u), 0x250u);
    COW_AT(1029a6c0)
                t73 = rd32(arg1 + 0x24u);
                wr32(t73 + 0x14u, 0u);
                ecx = t73;
            }
        }
    COW_AT(1029a6cd)
        t74 = rd32(arg1 + 0x24u);
        wr32(t74 + 0x14u, ebx);
        t75 = rd32(rd32(arg1 + 0x24u) + 0x34u) | 4u;
        t76 = rd32(arg1 + 0x24u);
        wr32(t76 + 0x34u, t75);
        wr8(arg1 + 0x44u, 0xffu);
        g->eax = t76;
        g->esp = sp0 - 0xa8u;
        t77 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, t74, 0);
        eax = t77;
    COW_AT(1029a6e8)
        t78 = eax + rd32(COW_IMG(0x109a2844u)) - rd32(sp0 - 0x8cu);
        t79 = rd32(sp0 - 0xa4u);
        t80 = rd32(sp0 - 0xa8u);
        wr32(COW_IMG(0x109a2844u), t78);
        ebx = t79;
        esi = t80;
        loc_a0 = rd32(sp0 - 0xa0u);
    }
    COW_AT(1029a6fe)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_a0;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029a470(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029a486u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a48du:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a4a4u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a4b4u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_94;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a4bau:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a4bdu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_94;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a4cau:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a4d9u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a4e1u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a501u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a51au:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a54eu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a571u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xbcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a57du:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a581u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a59du:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a5b0u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a5bcu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a5d2u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb4u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a5d7u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb4u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a5ecu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb4u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a604u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc0u;
        g->edi = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a609u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc0u;
        g->edi = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a61eu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc0u;
        g->edi = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a631u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xc8u;
        g->edi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a639u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a64eu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a655u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a66cu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a67cu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb8u;
        g->edi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a686u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        wr32(sp0 - 0xc4u, sp0 - 0x40u);
        wr32(sp0 - 0xc0u, sp0 - 0x40u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1029a69fu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xacu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a6a9u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a6b0u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a6c0u:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xb4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a6cdu:
    {
        uint32_t af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_9c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_9c = rd32(sp0 - 0x9cu);
        g->esp = sp0 - 0xa8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029a6e8u:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa8u;
        (void)sp0;
        return 1;
    }
    case 0x1029a6feu:
    {
        uint32_t af;
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a0;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_a0 = rd32(sp0 - 0xa0u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029a470(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1029a470(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
