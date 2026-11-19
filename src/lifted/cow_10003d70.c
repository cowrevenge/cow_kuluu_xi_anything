/* f_0x10003d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10003d70(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_90d0;
    uint32_t loc_90d4;
    uint32_t loc_90d8;
    uint32_t loc_90dc;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 37128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10003d7au: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003d7a;
    case 0x10003d87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003d87;
    case 0x10003db7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003db7;
    case 0x10003dbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003dbf;
    case 0x10003dc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003dc8;
    case 0x10003dd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003dd9;
    case 0x10003deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003dee;
    case 0x10003dfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003dfd;
    case 0x10003e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003e07;
    case 0x10003e2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); goto E_10003e2f;
    case 0x10003e3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); goto E_10003e3b;
    case 0x10003e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); goto E_10003e4a;
    case 0x10003e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); goto E_10003e58;
    case 0x10003e66u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); goto E_10003e66;
    case 0x10003e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003e77;
    case 0x10003e7du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); goto E_10003e7d;
    case 0x10003e88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); goto E_10003e88;
    case 0x10003e93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); goto E_10003e93;
    case 0x10003ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); goto E_10003ea1;
    case 0x10003eacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90dc = rd32(sp0 - 0x90dcu); loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003eac;
    case 0x10003ebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90dc = rd32(sp0 - 0x90dcu); loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003ebd;
    case 0x10003f3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90dc = rd32(sp0 - 0x90dcu); loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003f3c;
    case 0x10003f4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003f4c;
    case 0x10003f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003f5f;
    case 0x10003f8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003f8e;
    case 0x10003fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003fa5;
    case 0x10003fbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003fbb;
    case 0x10003fc5u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90dc = rd32(sp0 - 0x90dcu); loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003fc5;
    case 0x10003fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90dc = rd32(sp0 - 0x90dcu); loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003fd4;
    case 0x10003fe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_90dc = rd32(sp0 - 0x90dcu); loc_90d8 = rd32(sp0 - 0x90d8u); loc_90d4 = rd32(sp0 - 0x90d4u); loc_90d0 = rd32(sp0 - 0x90d0u); goto E_10003fe8;
    case 0x10003ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10003ff1;
    default: break;
    }
#endif

    COW_AT(10003d70)
    COW_AT(10003d7a)
    wr32(sp0 - 0x90e0u, in_ebx);
    wr32(sp0 - 0x90e4u, in_ebp);
    wr32(sp0 - 0x90e8u, in_esi);
    wr32(sp0 - 0x90ecu, in_edi);
    g->eax = 0x90dcu;
    g->edx = in_edx;
    g->esp = sp0 - 0x90ecu;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x90b0u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10003d87)
    wr32(sp0 - 0x90f0u, 0u);
    wr32(sp0 - 0x90f4u, 0u);
    wr32(sp0 - 0x90f8u, 0xffffffffu);
    wr32(sp0 - 0x90ccu, 0u);
    wr32(sp0 - 0x90c8u, 0u);
    wr32(sp0 - 0x90c4u, 0u);
    wr32(sp0 - 0x90c0u, 0x3f800000u);
    g->eax = eax;
    g->esp = sp0 - 0x90ecu;
    t3 = cow_fastcall(g, COW_IMG(0x10120590u), COW_IMG(0x104e1bf8u), edx, 3, 0xffffffffu, 0u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(10003db7)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10003dbf)
        g->edx = edx;
        g->esp = sp0 - 0x90ecu;
        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x90b0u, 0);
        t5 = g->edx;
        edx = t5;
    COW_AT(10003dc8)
        wr32(sp0 - 0x90f0u, arg1);
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x90ecu;
        t6 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x90b0u, 1, arg1);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    COW_AT(10003dd9)
        wr32(sp0 - 0x90f0u, sp0 - 0x90b0u);
        wr32(sp0 - 0x90f4u, 0x100u);
        t8 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x90ecu;
        cow_thiscall(g, COW_IMG(0x1000bd50u), t8, 2, 0x100u, sp0 - 0x90b0u);
        t9 = g->ecx;
        ecx = t9;
    COW_AT(10003dee)
        wr32(sp0 - 0x90f0u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f4u, sp0 - 0x90ccu);
        g->eax = sp0 - 0x90ccu;
        g->edx = sp0 - 0x90ccu;
        g->esp = sp0 - 0x90ecu;
        t10 = cow_cdecl(g, COW_IMG(0x100276f0u), 2, sp0 - 0x90ccu, sp0 - 0x90ccu);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    COW_AT(10003dfd)
        wr32(sp0 - 0x90f8u, sp0 - 0x90ccu);
        g->ecx = sp0 - 0x90ccu;
        g->edx = edx;
        g->esp = sp0 - 0x90f4u;
        cow_cdecl(g, COW_IMG(0x100278e0u), 1, sp0 - 0x90ccu);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    COW_AT(10003e07)
        edi = arg2;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = sp0 - 0x90ecu < sp0 - 0x90f8u;
        pf = PARITY((uint8_t)(sp0 - 0x90ecu));
        af = (sp0 - 0x90f8u ^ sp0 - 0x90ecu) >> 4u & 1u;
        zf = sp0 == 0x90ecu;
        sf = (int32_t)(sp0 - 0x90ecu) < 0;
        of = ((sp0 - 0x90f8u ^ sp0 - 0x90ecu) & (sp0 - 0x90ecu ^ 0xcu)) >> 0x1fu;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x90c0u, 0x3f800000u);
        t14 = ~ecx - 1u;
        wr32(sp0 - 0x90d8u, t14);
        if ((int32_t)(~ecx - 1u) <= 1024)
        {
            ecx = t14;
            loc_90d8 = t14;
        }
        else
        {
    COW_AT(10003e2f)
            wr32(sp0 - 0x90d8u, 0x400u);
            ecx = 0x400u;
            loc_90d8 = 0x400u;
        }
    COW_AT(10003e3b)
        wr32(sp0 - 0x90d4u, 0xfffffff8u);
        if ((int32_t)ecx <= 0)
        {
            loc_90d4 = 0xfffffff8u;
        }
        else
        {
    COW_AT(10003e4a)
            ebp = sp0 - 0x8000u;
            esi = 0u;
            edi = sp0 - 0x9000u;
            loc_90d4 = 0xfffffff8u;
L_10003e58: ;
    COW_AT(10003e58)
            if ((int8_t)rd8(arg2 + esi) < 32)
            {
                eax = (eax & 0xffffff00u) | rd8(arg2 + esi);
    COW_AT(10003e7d)
                wr16(edi, 0u);
                wr16(edi + 2u, 0u);
                edx = arg2;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(arg2 + esi);
    COW_AT(10003e66)
                wr32(sp0 - 0x90f0u, 0u);
                wr32(sp0 - 0x90f4u, 0u);
                wr32(sp0 - 0x90f8u, edi);
                wr32(sp0 - 0x90fcu, ebp);
                wr32(sp0 - 0x9100u, eax);
                g->eax = eax;
                g->edx = arg2;
                g->esp = sp0 - 0x90ecu;
                t15 = cow_thiscall(g, COW_IMG(0x10120510u), COW_IMG(0x104e1bf8u), 5, eax, ebp, edi, 0u, 0u);
                t16 = g->edx;
                eax = t15;
                edx = t16;
    COW_AT(10003e77)
                ecx = rd32(sp0 - 0x90d8u);
                loc_90d8 = rd32(sp0 - 0x90d8u);
                loc_90d4 = rd32(sp0 - 0x90d4u);
            }
    COW_AT(10003e88)
            if ((int32_t)(esi + 1u) < (int32_t)ecx)
            {
                ebp = ebp + 0x20u;
                esi = esi + 1u;
                edi = edi + 4u;
                goto L_10003e58;
            }
        }
    COW_AT(10003e93)
        wr32(sp0 - 0x90dcu, 0u);
        if ((int32_t)ecx > 0)
        {
    COW_AT(10003ea1)
            wr32(sp0 - 0x90d0u, sp0 - 0x7ffcu);
            ebx = 0xfffffff8u;
            ebp = 0u;
            edi = sp0 - 0x7ffcu;
            loc_90dc = 0u;
            loc_90d0 = sp0 - 0x7ffcu;
L_10003eac: ;
    COW_AT(10003eac)
            if (rd8(arg2 + ebp) == 0xau)
            {
    COW_AT(10003fc5)
                wr32(sp0 - 0x90dcu, 0u);
                wr32(sp0 - 0x90d4u, ebx - 8u);
                eax = arg2;
                loc_90d4 = ebx - 8u;
                ebx = ebx - 8u;
                loc_90dc = 0u;
            }
            else
            {
    COW_AT(10003ebd)
                t17 = rd16(ebp * 4u + sp0 - 0x8ffeu);
                t18 = rd16(ebp * 4u + sp0 - 0x9000u);
                wrf32(COW_IMG(0x1034f740u), (float)(double)(int32_t)loc_90dc);
                t19 = loc_90dc + (uint32_t)(int16_t)t18;
                wr32(sp0 - 0x90dcu, t19);
                wrf32(COW_IMG(0x1034f74cu), (float)(double)(int32_t)t19);
                wrf32(COW_IMG(0x1034f758u), (float)(double)(int32_t)loc_90dc);
                wrf32(COW_IMG(0x1034f764u), (float)(double)(int32_t)t19);
                t20 = ebx - (uint32_t)((int32_t)((uint32_t)(int16_t)t17 - (uint32_t)((int32_t)(uint32_t)(int16_t)t17 >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x90dcu, t20);
                t21 = ebx + (uint32_t)((int32_t)((uint32_t)(int16_t)t17 - (uint32_t)((int32_t)(uint32_t)(int16_t)t17 >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x90dcu, t21);
                wrf32(COW_IMG(0x1034f744u), (float)(double)(int32_t)t20);
                wrf32(COW_IMG(0x1034f750u), (float)(double)(int32_t)t20);
                wr32(sp0 - 0x90dcu, t19);
                wrf32(COW_IMG(0x1034f75cu), (float)(double)(int32_t)t21);
                wrf32(COW_IMG(0x1034f768u), (float)(double)(int32_t)t21);
                ecx = t19;
                edx = t20;
                ebx = COW_IMG(0x1034f740u);
                esi = sp0 - 0x9064u;
                loc_90dc = t19;
L_10003f3c: ;
    COW_AT(10003f3c)
                wr32(sp0 - 0x90f0u, 0x3f800000u);
                wr32(sp0 - 0x90f4u, ebx);
                wr32(sp0 - 0x90f8u, sp0 - 0x90bcu);
                g->esp = sp0 - 0x90ecu;
                cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x90bcu, ebx, 0x3f800000u);
                loc_90d0 = rd32(sp0 - 0x90d0u);
    COW_AT(10003f4c)
                wr32(sp0 - 0x90fcu, sp0 - 0x90bcu);
                wr32(sp0 - 0x9100u, sp0 - 0x90ccu);
                wr32(sp0 - 0x9104u, esi - 0xcu);
                g->esp = sp0 - 0x90f8u;
                cow_cdecl(g, COW_IMG(0x10026fa0u), 3, esi - 0xcu, sp0 - 0x90ccu, sp0 - 0x90bcu);
                loc_90d0 = rd32(sp0 - 0x90d0u);
    COW_AT(10003f5f)
                t22 = rd32(edi - 4u);
                t23 = rd32(edi);
                wr32(esi, 0x3f800000u);
                wr32(esi + 8u, t22);
                wr32(esi + 0xcu, t23);
                wr32(esi + 4u, arg3);
                if ((int32_t)(ebx + 0xcu) < (int32_t)COW_IMG(0x1034f770u))
                {
                    ecx = t22;
                    edx = t23;
                    ebx = ebx + 0xcu;
                    esi = esi + 0x1cu;
                    edi = edi + 8u;
                    loc_90d8 = rd32(sp0 - 0x90d8u);
                    loc_90d4 = rd32(sp0 - 0x90d4u);
                    loc_90dc = rd32(sp0 - 0x90dcu);
                    goto L_10003f3c;
                }
                ebx = ebx + 0xcu;
    COW_AT(10003f8e)
                wr32(sp0 - 0x90f0u, 0x144u);
                t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x90f4u, t24);
                g->edx = rd32(t24);
                t25 = rd32(t24);
                g->esp = sp0 - 0x90ecu;
                cow_thiscall(g, rd32(t25 + 0x130u), rd32(COW_IMG(0x1045666cu)), 2, t24, 0x144u);
                t26 = g->edx;
                edx = t26;
                loc_90d0 = rd32(sp0 - 0x90d0u);
    COW_AT(10003fa5)
                wr32(sp0 - 0x90f0u, 0x1cu);
                wr32(sp0 - 0x90f4u, sp0 - 0x9070u);
                wr32(sp0 - 0x90f8u, 2u);
                wr32(sp0 - 0x90fcu, 5u);
                g->ebx = ebx;
                g->eax = sp0 - 0x9070u;
                g->edx = edx;
                g->esp = sp0 - 0x90ecu;
                t27 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x9070u, 0x1cu);
                t28 = g->edx;
                eax = t27;
                edx = t28;
                loc_90d0 = rd32(sp0 - 0x90d0u);
    COW_AT(10003fbb)
                ecx = rd32(sp0 - 0x90d8u);
                ebx = rd32(sp0 - 0x90d4u);
                loc_90d8 = rd32(sp0 - 0x90d8u);
                loc_90d4 = rd32(sp0 - 0x90d4u);
                loc_90dc = rd32(sp0 - 0x90dcu);
            }
    COW_AT(10003fd4)
            wr32(sp0 - 0x90d0u, loc_90d0 + 0x20u);
            if ((int32_t)(ebp + 1u) < (int32_t)ecx)
            {
                ebp = ebp + 1u;
                edi = loc_90d0 + 0x20u;
                loc_90d0 = loc_90d0 + 0x20u;
                goto L_10003eac;
            }
        }
    }
    COW_AT(10003fe8)
    g->esp = sp0 - 0x90ecu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(10003ff1)
    g->ebx = rd32(sp0 - 0x90e0u);
    g->esi = rd32(sp0 - 0x90e8u);
    g->edi = rd32(sp0 - 0x90ecu);
    g->ebp = rd32(sp0 - 0x90e4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10003d70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10003d7au:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90dcu;
        g->eax = 0x90dcu;
        (void)sp0;
        return 1;
    }
    case 0x10003d87u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003db7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003dbfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003dc8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003dd9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003deeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        wr32(sp0 - 0x90f0u, sp0 - 0x90b0u);
        (void)sp0;
        return 1;
    }
    case 0x10003dfdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90f4u;
        wr32(sp0 - 0x90f4u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f0u, sp0 - 0x90ccu);
        (void)sp0;
        return 1;
    }
    case 0x10003e07u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90f8u;
        wr32(sp0 - 0x90f8u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f4u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f0u, sp0 - 0x90ccu);
        (void)sp0;
        return 1;
    }
    case 0x10003e2fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        g->esp = sp0 - 0x90ecu;
        wr32(sp0 - 0x90f8u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f4u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f0u, sp0 - 0x90ccu);
        (void)sp0;
        return 1;
    }
    case 0x10003e3bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        g->esp = sp0 - 0x90ecu;
        wr32(sp0 - 0x90f8u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f4u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f0u, sp0 - 0x90ccu);
        (void)sp0;
        return 1;
    }
    case 0x10003e4au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        g->esp = sp0 - 0x90ecu;
        g->ebx = 0xfffffff8u;
        g->esi = 0u;
        wr32(sp0 - 0x90f8u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f4u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f0u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90d4u, 0xfffffff8u);
        (void)sp0;
        return 1;
    }
    case 0x10003e58u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        g->esp = sp0 - 0x90ecu;
        g->ebx = 0xfffffff8u;
        (void)sp0;
        return 1;
    }
    case 0x10003e66u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        g->esp = sp0 - 0x90ecu;
        g->edx = arg2;
        g->ebx = 0xfffffff8u;
        (void)sp0;
        return 1;
    }
    case 0x10003e77u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        g->ebx = 0xfffffff8u;
        (void)sp0;
        return 1;
    }
    case 0x10003e7du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        g->esp = sp0 - 0x90ecu;
        g->edx = arg2;
        g->ebx = 0xfffffff8u;
        (void)sp0;
        return 1;
    }
    case 0x10003e88u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        g->esp = sp0 - 0x90ecu;
        g->ebx = 0xfffffff8u;
        (void)sp0;
        return 1;
    }
    case 0x10003e93u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        g->esp = sp0 - 0x90ecu;
        g->ebx = 0xfffffff8u;
        (void)sp0;
        return 1;
    }
    case 0x10003ea1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
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
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        g->esp = sp0 - 0x90ecu;
        g->ebx = 0xfffffff8u;
        g->ebp = 0u;
        wr32(sp0 - 0x90dcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10003eacu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        uint32_t loc_90dc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90dc = rd32(sp0 - 0x90dcu);
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003ebdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        uint32_t loc_90dc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90dc = rd32(sp0 - 0x90dcu);
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003f3cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        uint32_t loc_90dc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90dc = rd32(sp0 - 0x90dcu);
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003f4cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90f8u;
        wr32(sp0 - 0x90f8u, sp0 - 0x90bcu);
        (void)sp0;
        return 1;
    }
    case 0x10003f5fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x9104u;
        wr32(sp0 - 0x9100u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90fcu, sp0 - 0x90bcu);
        wr32(sp0 - 0x90f8u, sp0 - 0x90bcu);
        (void)sp0;
        return 1;
    }
    case 0x10003f8eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        wr32(sp0 - 0x9100u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90fcu, sp0 - 0x90bcu);
        wr32(sp0 - 0x90f8u, sp0 - 0x90bcu);
        (void)sp0;
        return 1;
    }
    case 0x10003fa5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        wr32(sp0 - 0x9100u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90fcu, sp0 - 0x90bcu);
        wr32(sp0 - 0x90f8u, sp0 - 0x90bcu);
        (void)sp0;
        return 1;
    }
    case 0x10003fbbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        wr32(sp0 - 0x9100u, sp0 - 0x90ccu);
        wr32(sp0 - 0x90f4u, sp0 - 0x9070u);
        (void)sp0;
        return 1;
    }
    case 0x10003fc5u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        uint32_t loc_90dc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90dc = rd32(sp0 - 0x90dcu);
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10003fd4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        uint32_t loc_90dc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90dc = rd32(sp0 - 0x90dcu);
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003fe8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_90d0;
        uint32_t loc_90d4;
        uint32_t loc_90d8;
        uint32_t loc_90dc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_90dc = rd32(sp0 - 0x90dcu);
        loc_90d8 = rd32(sp0 - 0x90d8u);
        loc_90d4 = rd32(sp0 - 0x90d4u);
        loc_90d0 = rd32(sp0 - 0x90d0u);
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    case 0x10003ff1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90ecu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10003d70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10003d70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
