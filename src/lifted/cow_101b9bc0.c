/* f_0x101b9bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b9bc0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 168u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b9bddu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x90u); in_esi = rd32(sp0 - 0x8cu); in_ebp = rd32(sp0 - 0x88u); in_ebx = rd32(sp0 - 0x84u); g->ebp = rd32(sp0 - 0x88u); g->ebx = rd32(sp0 - 0x84u); g->edi = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x8cu); goto E_101b9bdd;
    case 0x101b9bf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9bf3;
    case 0x101b9c18u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9c18;
    case 0x101b9c1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9c1f;
    case 0x101b9c44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9c44;
    case 0x101b9c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101b9c59;
    case 0x101b9c63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101b9c63;
    case 0x101b9c7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_101b9c7f;
    case 0x101b9c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9c9c;
    case 0x101b9cbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9cbd;
    case 0x101b9cc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9cc8;
    case 0x101b9cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9cd6;
    case 0x101b9d1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9d1b;
    case 0x101b9d25u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9d25;
    case 0x101b9d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9d42;
    case 0x101b9d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9d4c;
    case 0x101b9d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9d74;
    case 0x101b9d83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9d83;
    case 0x101b9d8du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9d8d;
    case 0x101b9daau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9daa;
    case 0x101b9db4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9db4;
    case 0x101b9de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b9de6;
    default: break;
    }
#endif

    COW_AT(101b9bc0)
    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_ebp);
    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x90u, in_edi);
    if (rd32(self + 0x114u) == 0u)
    {
        eax = rd32(self + 0x114u);
        edx = in_edx;
        loc_84 = in_ebx;
        loc_88 = in_ebp;
        loc_8c = in_esi;
        loc_90 = in_edi;
        goto L_101b9c59;
    }
    COW_AT(101b9bdd)
    wr32(sp0 - 0x94u, arg1);
    wr32(sp0 - 0x98u, self + 8u);
    g->eax = self + 8u;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x90u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4b60u), t1, 2, self + 8u, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = t2;
        goto L_101b9c18;
    }
    eax = t2;
    edx = t4;
    COW_AT(101b9bf3)
    t5 = rd32(self + 0x118u);
    wr32(sp0 - 0x94u, t5);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0xa0u;
    t6 = cow_thiscall(g, rd32(self + 0x114u), t5, 0);
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x88u);
    return t6 & 0xffffff00u;
L_101b9c18: ;
    COW_AT(101b9c18)
    if ((int32_t)(esi - 0x18u) > 0)
    {
        esi = esi - 0x18u;
        goto L_101b9c44;
    }
    COW_AT(101b9c1f)
    t7 = rd32(self + 0x118u);
    wr32(sp0 - 0x94u, t7);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 2u);
    g->eax = eax;
    g->esp = sp0 - 0xa0u;
    t8 = cow_thiscall(g, rd32(self + 0x114u), ecx, 0);
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x88u);
    return t8 & 0xffffff00u;
L_101b9c44: ;
    COW_AT(101b9c44)
    wr32(sp0 - 0x94u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x88u;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
    t10 = g->edx;
    wr32(self + 0x108u, t9);
    wr32(self + 0x10cu, esi);
    eax = t9;
    edx = t10;
    loc_84 = rd32(sp0 - 0x84u);
    loc_88 = rd32(sp0 - 0x88u);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_90 = rd32(sp0 - 0x90u);
L_101b9c59: ;
    COW_AT(101b9c59)
    if (rd8(self + 0x11cu) != 0u)
    {
    COW_AT(101b9c63)
        t11 = rd32(self + 0x10cu);
        t12 = rd32(self + 0x108u);
        edi = t12;
        eax = 0u;
        ecx = t11 >> 2u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t11 & 3u;
        while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edx = t11;
    }
    COW_AT(101b9c7f)
    wr32(sp0 - 0x94u, arg1);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 0x18u);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    wr32(sp0 - 0xa4u, self + 8u);
    g->eax = sp0 - 0x80u;
    g->edx = edx;
    t13 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x90u;
    t14 = cow_thiscall(g, COW_IMG(0x101c4790u), t13, 5, self + 8u, sp0 - 0x80u, 0x18u, 0u, arg1);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 < 0)
    {
        ecx = t15;
        edx = t16;
        goto L_101b9d1b;
    }
    eax = t14;
    COW_AT(101b9c9c)
    wr32(sp0 - 0x94u, arg1);
    wr32(sp0 - 0x98u, 0x18u);
    t17 = rd32(self + 0x10cu);
    wr32(sp0 - 0x9cu, t17);
    t18 = rd32(self + 0x108u);
    wr32(sp0 - 0xa0u, t18);
    wr32(sp0 - 0xa4u, self + 8u);
    g->eax = eax;
    g->edx = t18;
    t19 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x90u;
    t20 = cow_thiscall(g, COW_IMG(0x101c4790u), t19, 5, self + 8u, t18, t17, 0x18u, arg1);
    t21 = g->ecx;
    t22 = g->edx;
    if ((int32_t)t20 < 0)
    {
        ecx = t21;
        edx = t22;
        goto L_101b9d1b;
    }
    edx = t22;
    COW_AT(101b9cbd)
    if (rd32(sp0 - 0x80u) != rd32(self + 4u))
    {
        ecx = rd32(self + 4u);
        goto L_101b9d1b;
    }
    COW_AT(101b9cc8)
    if (rd32(self + 0x114u) != 0u) goto L_101b9d83;
    eax = rd32(self + 0x114u);
    COW_AT(101b9cd6)
    wr32(sp0 - 0x94u, sp0 - 0x68u);
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x68u);
    t23 = rd32(self + 0x10cu);
    wr32(sp0 - 0x98u, t23);
    t24 = rd32(self + 0x108u);
    wr32(sp0 - 0x9cu, t24);
    wr32(sp0 - 0xa0u, sp0 - 0x68u);
    g->eax = t24;
    g->ecx = sp0 - 0x68u;
    g->esp = sp0 - 0xcu;
    t25 = cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x68u, t24, t23, sp0 - 0x68u, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u)}, g->ecx, g->edx, g->eax, 148u);
    t26 = g->ecx;
    wr32(sp0 - 0xa4u, sp0 - 0x68u);
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x10u;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x68u, sp0 - 0x68u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), sp0 - 0x68u, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u)}, g->ecx, g->edx, g->eax, 148u);
    t27 = g->edx;
    esi = sp0 - 0x10u;
    edi = sp0 - 0x78u;
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = t27;
        goto L_101b9d83;
    }
    edx = t27;
L_101b9d1b: ;
    COW_AT(101b9d1b)
    if (rd32(self + 0x110u) == 0u) goto L_101b9d42;
    eax = rd32(self + 0x110u);
    COW_AT(101b9d25)
    t37 = rd32(self + 0x118u);
    wr32(sp0 - 0x94u, t37);
    wr32(sp0 - 0x98u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t38 = cow_thiscall(g, eax, t37, 0);
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x88u);
    return t38 & 0xffffff00u;
L_101b9d42: ;
    COW_AT(101b9d42)
    if (rd32(self + 0x114u) == 0u)
    {
        eax = rd32(self + 0x114u);
    }
    else
    {
        eax = rd32(self + 0x114u);
    COW_AT(101b9d4c)
        t39 = rd32(self + 0x118u);
        wr32(sp0 - 0x94u, t39);
        wr32(sp0 - 0x98u, 0u);
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 1u);
        g->edx = t39;
        g->esp = sp0 - 0xa0u;
        cow_thiscall(g, eax, ecx, 0);
        t40 = g->ecx;
        t41 = g->edx;
        t42 = rd32(self + 0x108u);
        wr32(sp0 - 0xa4u, t42);
        g->eax = t42;
        t43 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t40, t41, 1, 1, t42);
        wr32(self + 0x10cu, 0u);
        eax = t43;
    }
    COW_AT(101b9d74)
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x88u);
    return eax & 0xffffff00u;
L_101b9d83: ;
    COW_AT(101b9d83)
    if (rd32(self + 0x110u) == 0u) goto L_101b9daa;
    eax = rd32(self + 0x110u);
    COW_AT(101b9d8d)
    t28 = rd32(self + 0x118u);
    wr32(sp0 - 0x94u, t28);
    wr32(sp0 - 0x98u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t29 = cow_thiscall(g, eax, t28, 0);
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x88u);
    return (t29 & 0xffffff00u) | 1u;
L_101b9daa: ;
    COW_AT(101b9daa)
    if (rd32(self + 0x114u) == 0u)
    {
        eax = rd32(self + 0x114u);
    }
    else
    {
        eax = rd32(self + 0x114u);
    COW_AT(101b9db4)
        t30 = rd32(self + 0x118u);
        wr32(sp0 - 0x94u, t30);
        t31 = rd32(self + 0x10cu);
        wr32(sp0 - 0x98u, t31);
        t32 = rd32(self + 0x108u);
        wr32(sp0 - 0x9cu, t32);
        wr32(sp0 - 0xa0u, 0u);
        g->edx = t32;
        g->esp = sp0 - 0xa0u;
        cow_thiscall(g, eax, t31, 0);
        t33 = g->ecx;
        t34 = g->edx;
        t35 = rd32(self + 0x108u);
        wr32(sp0 - 0xa4u, t35);
        g->eax = t35;
        t36 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t33, t34, 1, 1, t35);
        wr32(self + 0x10cu, 0u);
        eax = t36;
    }
    COW_AT(101b9de6)
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x88u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b9bc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b9bddu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x90u);
        in_esi = rd32(sp0 - 0x8cu);
        in_ebp = rd32(sp0 - 0x88u);
        in_ebx = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b9bf3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9c18u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b9c1fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9c44u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b9c59u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b9c63u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b9c7fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b9c9cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        g->esi = self + 8u;
        wr32(sp0 - 0xa0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101b9cbdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9cc8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9cd6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9d1bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9d25u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9d42u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9d4cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9d74u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9d83u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9d8du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9daau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9db4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x101b9de6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9bc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b9bc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
