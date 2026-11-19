/* f_0x10007ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10007ae0(Guest* g)
{
    double d24;
    double d31;
    double d32;
    double d33;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    int64_t q1;
    int64_t q16;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10007aeau: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10007aea;
    case 0x10007af4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10007af4;
    case 0x10007af9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10007af9;
    case 0x10007afcu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10007afc;
    case 0x10007b10u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10007b10;
    case 0x10007b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b22;
    case 0x10007b2au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b2a;
    case 0x10007b3au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b3a;
    case 0x10007b44u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b44;
    case 0x10007b49u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b49;
    case 0x10007b53u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b53;
    case 0x10007b70u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b70;
    case 0x10007b95u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b95;
    case 0x10007b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007b9d;
    case 0x10007ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007ba4;
    case 0x10007baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007bae;
    case 0x10007bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007bb6;
    case 0x10007bd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10007bd5;
    case 0x10007be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007be0;
    case 0x10007c23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007c23;
    case 0x10007c29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007c29;
    case 0x10007c44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007c44;
    case 0x10007c4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007c4c;
    case 0x10007c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007c54;
    case 0x10007c5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x4cu); goto E_10007c5c;
    case 0x10007cd0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10007cd0;
    case 0x10007ce4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007ce4;
    case 0x10007cf8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007cf8;
    case 0x10007d02u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d02;
    case 0x10007d07u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d07;
    case 0x10007d11u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d11;
    case 0x10007d2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d2e;
    case 0x10007d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d53;
    case 0x10007d5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d5b;
    case 0x10007d62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d62;
    case 0x10007d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d6c;
    case 0x10007d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d74;
    case 0x10007d93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_10007d93;
    case 0x10007d9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007d9c;
    case 0x10007de0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007de0;
    case 0x10007de5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007de5;
    case 0x10007dedu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007ded;
    case 0x10007df2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007df2;
    case 0x10007e0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10007e0f;
    default: break;
    }
#endif

    COW_AT(10007ae0)
    if (rd8(self + 0xc9au) == 0u) goto L_10007afc;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xc9au);
    COW_AT(10007aea)
    if (rd8(self + 0xc99u) == 0u) goto L_10007af9;
    eax = (eax & 0xffffff00u) | rd8(self + 0xc99u);
    COW_AT(10007af4)
    COW_AT(10007cd0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if (rd8(COW_IMG(0x10455c39u)) == 0u)
    {
        loc_4 = self;
        goto L_10007e0f;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c39u));
    COW_AT(10007ce4)
    wr32(COW_IMG(0x10455c2cu), 0u);
    wr32(sp0 - 4u, 0u);
    if (rd8(self + 0xdbcu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(10007cf8)
        if ((int32_t)rd32(self + 0xdb4u) > 0)
        {
            eax = rd32(self + 0xdb4u);
    COW_AT(10007d02)
            wr32(COW_IMG(0x10455c2cu), eax);
        }
    COW_AT(10007d07)
        if ((int32_t)rd32(self + 0xdb0u) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0xdb0u);
    COW_AT(10007d11)
            q1 = (int64_t)cow_muls(0x66666667u, ecx);
            t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 2u);
            t3 = t2 + (t2 >> 0x1fu) + rd32(COW_IMG(0x10455c2cu));
            wr32(COW_IMG(0x10455c2cu), t3);
            edx = t2 + (t2 >> 0x1fu);
        }
    }
    COW_AT(10007d2e)
    wr32(self + 0xdb0u, 0u);
    wr32(self + 0xdb4u, 0u);
    wr8(self + 0xdbcu, 0u);
    t4 = rd32(COW_IMG(0x10455c2cu)) * 2u;
    t5 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t4);
    if ((int32_t)(t5 * 2u) >= 10)
    {
        eax = t4;
        ecx = t5;
    COW_AT(10007d5b)
        if ((int32_t)eax > 256)
        {
    COW_AT(10007d62)
            wr32(COW_IMG(0x10455c2cu), 0x100u);
        }
    }
    else
    {
        eax = t4;
        ecx = t5;
    COW_AT(10007d53)
        wr32(COW_IMG(0x10455c2cu), 0u);
    }
    COW_AT(10007d6c)
    if ((int32_t)rd32(self + 0xdb8u) <= 0) goto L_10007d9c;
    COW_AT(10007d74)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    d9 = cow_take_float(g);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = rd32(self + 0xdb8u) - (uint32_t)(int16_t)t10;
    t12 = rd32(self + 0xdb8u);
    wr32(self + 0xdb8u, t11);
    if ((int32_t)(t12 - (uint32_t)(int16_t)t10) <= 0) goto L_10007d9c;
    COW_AT(10007d93)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = in_edi;
    return 1u;
L_10007af9: ;
    COW_AT(10007af9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_10007afc: ;
    COW_AT(10007afc)
    COW_AT(10007b10)
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    if (rd32(COW_IMG(0x10455c28u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10455c28u));
        goto L_10007b2a;
    }
    COW_AT(10007b22)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_10007b2a: ;
    COW_AT(10007b2a)
    wr32(COW_IMG(0x10455c2cu), 0u);
    if (rd8(self + 0xdbcu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(10007b3a)
        if ((int32_t)rd32(self + 0xdb4u) > 0)
        {
            eax = rd32(self + 0xdb4u);
    COW_AT(10007b44)
            wr32(COW_IMG(0x10455c2cu), eax);
        }
    COW_AT(10007b49)
        if ((int32_t)rd32(self + 0xdb0u) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0xdb0u);
    COW_AT(10007b53)
            q16 = (int64_t)cow_muls(0x66666667u, ecx);
            t17 = (uint32_t)((int32_t)cow_qhi(q16) >> 2u);
            t18 = t17 + (t17 >> 0x1fu) + rd32(COW_IMG(0x10455c2cu));
            wr32(COW_IMG(0x10455c2cu), t18);
            edx = t17 + (t17 >> 0x1fu);
        }
    }
    COW_AT(10007b70)
    wr32(self + 0xdb0u, 0u);
    wr32(self + 0xdb4u, 0u);
    wr8(self + 0xdbcu, 0u);
    t19 = rd32(COW_IMG(0x10455c2cu)) * 2u;
    t20 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t19);
    if ((int32_t)(t20 * 2u) >= 10)
    {
        eax = t19;
        ecx = t20;
    COW_AT(10007b9d)
        if ((int32_t)eax > 256)
        {
    COW_AT(10007ba4)
            wr32(COW_IMG(0x10455c2cu), 0x100u);
        }
    }
    else
    {
        eax = t19;
        ecx = t20;
    COW_AT(10007b95)
        wr32(COW_IMG(0x10455c2cu), 0u);
    }
    COW_AT(10007bae)
    if ((int32_t)rd32(self + 0xdb8u) <= 0) goto L_10007be0;
    COW_AT(10007bb6)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t21 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t22 = g->ecx;
    t23 = g->edx;
    d24 = cow_take_float(g);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
    t26 = rd32(self + 0xdb8u) - (uint32_t)(int16_t)t25;
    t27 = rd32(self + 0xdb8u);
    wr32(self + 0xdb8u, t26);
    if ((int32_t)(t27 - (uint32_t)(int16_t)t25) <= 0) goto L_10007be0;
    COW_AT(10007bd5)
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = in_edi;
    return 1u;
L_10007be0: ;
    COW_AT(10007be0)
    wr32(self + 0xdb8u, 5u);
    wr32(sp0 - 0x3cu, 0u);
    t28 = (uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u + (uint8_t)(uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u) >> 0x1fu)) >> 8u);
    t29 = rd32(COW_IMG(0x10455c24u));
    t30 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t28);
    wr32(COW_IMG(0x10455c30u), t28);
    if (t29 != 1u)
    {
        eax = t28;
        ecx = t29;
        edx = (uint8_t)(uint32_t)((int32_t)(t30 * 0x2710u) >> 0x1fu);
    COW_AT(10007c29)
        wr32(sp0 - 0x40u, eax);
        wr32(sp0 - 0x3cu, eax);
        d31 = (double)(int32_t)rd32(COW_IMG(0x10455c2cu));
        d32 = fr(g, d31 * d31);
        d33 = fr(g, sqrt(fr(g, d32 + d32)));
        fpush(g, d33);
        g->esp = sp0 - 0x4cu;
        t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t34;
    }
    else
    {
        eax = t28;
    COW_AT(10007c23)
        wr32(sp0 - 0x40u, 0u);
    }
    COW_AT(10007c44)
    wr32(sp0 - 0x44u, eax);
    if (eax != 0u) goto L_10007c5c;
    COW_AT(10007c4c)
    if (rd32(self + 0xdc0u) != 0u) goto L_10007c5c;
    COW_AT(10007c54)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_10007c5c: ;
    COW_AT(10007c5c)
    wr32(sp0 - 0x50u, in_edi);
    wr32(self + 0xdc0u, eax);
    edi = sp0 - 0x38u;
    eax = 0u;
    ecx = 0xeu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x10455c24u)));
    wr32(sp0 - 8u, sp0 - 0x44u);
    wr32(sp0 - 0x38u, 0x38u);
    wr32(sp0 - 0x34u, 0x12u);
    wr32(sp0 - 0x14u, sp0 - 0x40u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x54u, 0x20000140u);
    wr32(sp0 - 0x58u, sp0 - 0x38u);
    wr32(sp0 - 0x5cu, rd32(COW_IMG(0x10455c28u)));
    g->eax = rd32(COW_IMG(0x10455c28u));
    t35 = rd32(COW_IMG(0x10455c28u));
    g->esp = sp0 - 0x50u;
    t36 = cow_thiscall(g, rd32(rd32(t35) + 0x18u), rd32(t35), 3, t35, sp0 - 0x38u, 0x20000140u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return t36;
L_10007d9c: ;
    COW_AT(10007d9c)
    wr32(self + 0xdb8u, 5u);
    t13 = (uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u + (uint8_t)(uint32_t)((int32_t)(rd32(COW_IMG(0x10455c2cu)) * 0x2710u) >> 0x1fu)) >> 8u);
    t14 = rd32(COW_IMG(0x10455c2cu));
    wr32(COW_IMG(0x10455c2cu), t13);
    wr32(COW_IMG(0x10455c30u), t13);
    if ((int32_t)(t13 * 4u) <= 65535)
    {
        eax = t13 * 4u;
        ecx = t13 * 4u;
        edx = (uint8_t)(uint32_t)((int32_t)(t14 * 0x2710u) >> 0x1fu);
    }
    else
    {
        ecx = t13 * 4u;
        edx = (uint8_t)(uint32_t)((int32_t)(t14 * 0x2710u) >> 0x1fu);
    COW_AT(10007de0)
        eax = 0xffffu;
    }
    COW_AT(10007de5)
    if ((int32_t)ecx > 65535)
    {
    COW_AT(10007ded)
        ecx = 0xffffu;
    }
    COW_AT(10007df2)
    wr16(sp0 - 4u, (uint16_t)eax);
    wr16(sp0 - 2u, (uint16_t)ecx);
    wr32(sp0 - 0x10u, sp0 - 4u);
    t15 = rd32(self + 0xc9cu);
    wr32(sp0 - 0x14u, t15);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10008ed0u), 2, t15, sp0 - 4u);
    loc_4 = rd32(sp0 - 4u);
L_10007e0f: ;
    COW_AT(10007e0f)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10007ae0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10007aeau:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10007af4u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10007af9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10007afcu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10007b10u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10007b22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10007b2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007b3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007b44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007b49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007b53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007b70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007b95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007b9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007ba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007baeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007bb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007bd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10007be0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007c23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007c29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007c44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007c4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007c54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10007c5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007cd0u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10007ce4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10007cf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007d93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10007d9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007de0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007de5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007dedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007df2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10007e0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
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
void cow_adapter_10007ae0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10007ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
