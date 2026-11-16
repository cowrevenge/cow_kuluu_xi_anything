/* f_0x102ec7ae - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ec7ae(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    wr32(COW_IMG(0x109b2620u), 0u);
    wr32(COW_IMG(0x109b261cu), 0u);
    wr32(COW_IMG(0x109b2614u), COW_IMG(0x109b2220u));
    wr32(COW_IMG(0x109b2610u), COW_IMG(0x109b1a50u));
    wr16(COW_IMG(0x109b2220u), 0u);
    eax = in_eax;
    edx = in_edx;
    esi = 0u;
L_102ec7de: ;
    wr32(COW_IMG(0x109b2618u), 0xffffffffu);
    eax = 0xffffffffu;
L_102ec7e6: ;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103ccd28u) + esi * 2u) != 0u)
    {
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccd28u) + esi * 2u);
        goto L_102ec8cc;
    }
    if ((int32_t)eax < 0)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x102eb95fu), rd32(COW_IMG(0x109b2628u)), 0);
        t2 = g->edx;
        wr32(COW_IMG(0x109b2618u), t1);
        if ((int32_t)t1 >= 0)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            wr32(COW_IMG(0x109b2618u), 0u);
            eax = 0u;
        }
    }
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103cce20u) + esi * 2u) == 0u) goto L_102ec88f;
    ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x103cce20u) + esi * 2u);
    if ((int32_t)(eax + ecx) < 0) goto L_102ec88f;
    ecx = eax + ecx;
    if ((int32_t)ecx > 263) goto L_102ec894;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103cd1f0u) + ecx * 2u) != eax)
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x103cd1f0u) + ecx * 2u);
        goto L_102ec894;
    }
    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x103cd1f0u) + ecx * 2u);
    ecx = ecx * 2u;
    if (rd32(COW_IMG(0x109b2614u)) >= COW_IMG(0x109b2606u))
    {
        eax = rd32(COW_IMG(0x109b2614u));
        goto L_102ecb89;
    }
    eax = rd32(COW_IMG(0x109b2614u));
    t3 = rd16(COW_IMG(0x103ccfe0u) + ecx);
    wr32(COW_IMG(0x109b2614u), eax + 2u);
    wr16(eax + 2u, (uint16_t)t3);
    wr32(COW_IMG(0x109b2610u), rd32(COW_IMG(0x109b2610u)) + 4u);
    t4 = rd32(COW_IMG(0x109b2608u));
    wr32(rd32(COW_IMG(0x109b2610u)), t4);
    t5 = rd32(COW_IMG(0x109b261cu));
    wr32(COW_IMG(0x109b2618u), 0xffffffffu);
    if ((int32_t)t5 <= 0)
    {
        eax = 0xffffffffu;
        esi = (uint32_t)(int16_t)t3;
    }
    else
    {
        esi = (uint32_t)(int16_t)t3;
        wr32(COW_IMG(0x109b261cu), rd32(COW_IMG(0x109b261cu)) - 1u);
        eax = 0xffffffffu;
    }
    goto L_102ec7e6;
L_102ec88f: ;
L_102ec894: ;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103ccee8u) + esi * 2u) == 0u)
    {
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccee8u) + esi * 2u);
        goto L_102ecac9;
    }
    ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccee8u) + esi * 2u);
    if ((int32_t)(eax + ecx) < 0)
    {
        ecx = eax + ecx;
        goto L_102ecac9;
    }
    ecx = eax + ecx;
    if ((int32_t)ecx > 263) goto L_102ecac9;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103cd1f0u) + ecx * 2u) != eax)
    {
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x103cd1f0u) + ecx * 2u);
        ecx = ecx * 2u;
        goto L_102ecac9;
    }
    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x103cd1f0u) + ecx * 2u);
    ecx = ecx * 2u;
    ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccfe0u) + ecx);
L_102ec8cc: ;
    t9 = (uint32_t)(int16_t)rd16(COW_IMG(0x103cccc0u) + ecx * 2u);
    t10 = rd32(rd32(COW_IMG(0x109b2610u)) - (t9 << 2u) + 4u);
    wr32(COW_IMG(0x109b260cu), t10);
    if (ecx - 1u > 0x30u)
    {
        ebx = t9 << 2u;
        esi = t9;
        edi = ecx * 2u;
        goto L_102ec9f9;
    }
    eax = ecx - 1u;
    ebx = t9 << 2u;
    esi = t9;
    edi = ecx * 2u;
    t11 = rd32(COW_IMG(0x102ecba3u) + eax * 4u);
    switch (t11 - RD)
    {
    case 0x102ec8fdu: goto L_102ec8fd;
    case 0x102ec904u: goto L_102ec904;
    case 0x102ec90bu: goto L_102ec90b;
    case 0x102ec911u: goto L_102ec911;
    case 0x102ec918u: goto L_102ec918;
    case 0x102ec91fu: goto L_102ec91f;
    case 0x102ec926u: goto L_102ec926;
    case 0x102ec92du: goto L_102ec92d;
    case 0x102ec934u: goto L_102ec934;
    case 0x102ec93bu: goto L_102ec93b;
    case 0x102ec942u: goto L_102ec942;
    case 0x102ec949u: goto L_102ec949;
    case 0x102ec950u: goto L_102ec950;
    case 0x102ec957u: goto L_102ec957;
    case 0x102ec95eu: goto L_102ec95e;
    case 0x102ec965u: goto L_102ec965;
    case 0x102ec96cu: goto L_102ec96c;
    case 0x102ec970u: goto L_102ec970;
    case 0x102ec974u: goto L_102ec974;
    case 0x102ec978u: goto L_102ec978;
    case 0x102ec97cu: goto L_102ec97c;
    case 0x102ec980u: goto L_102ec980;
    case 0x102ec984u: goto L_102ec984;
    case 0x102ec988u: goto L_102ec988;
    case 0x102ec98cu: goto L_102ec98c;
    case 0x102ec990u: goto L_102ec990;
    case 0x102ec994u: goto L_102ec994;
    case 0x102ec998u: goto L_102ec998;
    case 0x102ec99cu: goto L_102ec99c;
    case 0x102ec9a0u: goto L_102ec9a0;
    case 0x102ec9a4u: goto L_102ec9a4;
    case 0x102ec9a8u: goto L_102ec9a8;
    case 0x102ec9acu: goto L_102ec9ac;
    case 0x102ec9b0u: goto L_102ec9b0;
    case 0x102ec9b4u: goto L_102ec9b4;
    case 0x102ec9b8u: goto L_102ec9b8;
    case 0x102ec9bcu: goto L_102ec9bc;
    case 0x102ec9c0u: goto L_102ec9c0;
    case 0x102ec9c4u: goto L_102ec9c4;
    case 0x102ec9c8u: goto L_102ec9c8;
    case 0x102ec9ccu: goto L_102ec9cc;
    case 0x102ec9d0u: goto L_102ec9d0;
    case 0x102ec9d4u: goto L_102ec9d4;
    case 0x102ec9d8u: goto L_102ec9d8;
    case 0x102ec9dcu: goto L_102ec9dc;
    case 0x102ec9e0u: goto L_102ec9e0;
    case 0x102ec9e4u: goto L_102ec9e4;
    case 0x102ec9e8u: goto L_102ec9e8;
    case 0x102ec9ecu: goto L_102ec9ec;
    default: rt_fatal(g, COW_IMG(0x102ec8f6u), "switch");
    }
    return 0;
L_102ec8fd: ;
    loc_14 = 0u;
L_102ec9ee: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x102ebe77u), rd32(COW_IMG(0x109b2628u)), 1, loc_14);
L_102ec9f9: ;
    t12 = rd32(COW_IMG(0x109b2614u)) - esi * 2u;
    t13 = rd16(COW_IMG(0x103ccc58u) + edi);
    wr32(COW_IMG(0x109b2614u), t12);
    t14 = rd16(t12);
    wr32(COW_IMG(0x109b2610u), rd32(COW_IMG(0x109b2610u)) - ebx);
    if ((uint32_t)(int16_t)t14 != 0u)
    {
        eax = t12;
        ecx = (uint32_t)(int16_t)t14;
        edx = (uint32_t)(int16_t)t13;
        goto L_102eca73;
    }
    eax = t12;
    ecx = (uint32_t)(int16_t)t14;
    edx = (uint32_t)(int16_t)t13;
    if (edx != 0u) goto L_102eca73;
    wr32(COW_IMG(0x109b2614u), eax + 2u);
    wr16(eax + 2u, 3u);
    wr32(COW_IMG(0x109b2610u), rd32(COW_IMG(0x109b2610u)) + 4u);
    wr32(rd32(COW_IMG(0x109b2610u)), rd32(COW_IMG(0x109b260cu)));
    if ((int32_t)rd32(COW_IMG(0x109b2618u)) >= 0)
    {
        eax = rd32(COW_IMG(0x109b2618u));
        zf = rd32(COW_IMG(0x109b2618u)) == 0u;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t15 = cow_thiscall(g, COW_IMG(0x102eb95fu), rd32(COW_IMG(0x109b2628u)), 0);
        t16 = g->edx;
        wr32(COW_IMG(0x109b2618u), t15);
        if ((int32_t)t15 >= 0)
        {
            eax = t15;
            edx = t16;
            zf = t15 == 0u;
        }
        else
        {
            edx = t16;
            wr32(COW_IMG(0x109b2618u), 0u);
            eax = 0u;
            zf = 1u;
        }
    }
    if (!zf)
    {
        esi = 3u;
        goto L_102ec7e6;
    }
    eax = 0u;
L_102ecb9e: ;
    return eax;
L_102ec904: ;
    loc_14 = 1u;
    goto L_102ec9ee;
L_102ec90b: ;
    loc_14 = 4u;
    goto L_102ec9ee;
L_102ec911: ;
    loc_14 = 5u;
    goto L_102ec9ee;
L_102ec918: ;
    loc_14 = 6u;
    goto L_102ec9ee;
L_102ec91f: ;
    loc_14 = 7u;
    goto L_102ec9ee;
L_102ec926: ;
    loc_14 = 8u;
    goto L_102ec9ee;
L_102ec92d: ;
    loc_14 = 9u;
    goto L_102ec9ee;
L_102ec934: ;
    loc_14 = 0xau;
    goto L_102ec9ee;
L_102ec93b: ;
    loc_14 = 0xbu;
    goto L_102ec9ee;
L_102ec942: ;
    loc_14 = 0xcu;
    goto L_102ec9ee;
L_102ec949: ;
    loc_14 = 0xdu;
    goto L_102ec9ee;
L_102ec950: ;
    loc_14 = 0xeu;
    goto L_102ec9ee;
L_102ec957: ;
    loc_14 = 0xfu;
    goto L_102ec9ee;
L_102ec95e: ;
    loc_14 = 0x10u;
    goto L_102ec9ee;
L_102ec965: ;
    loc_14 = 0x11u;
    goto L_102ec9ee;
L_102ec96c: ;
    loc_14 = 0x12u;
    goto L_102ec9ee;
L_102ec970: ;
    loc_14 = 0x13u;
    goto L_102ec9ee;
L_102ec974: ;
    loc_14 = 0x14u;
    goto L_102ec9ee;
L_102ec978: ;
    loc_14 = 0x15u;
    goto L_102ec9ee;
L_102ec97c: ;
    loc_14 = 0x16u;
    goto L_102ec9ee;
L_102ec980: ;
    loc_14 = 0x17u;
    goto L_102ec9ee;
L_102ec984: ;
    loc_14 = 0x18u;
    goto L_102ec9ee;
L_102ec988: ;
    loc_14 = 0x19u;
    goto L_102ec9ee;
L_102ec98c: ;
    loc_14 = 0x1au;
    goto L_102ec9ee;
L_102ec990: ;
    loc_14 = 0x1bu;
    goto L_102ec9ee;
L_102ec994: ;
    loc_14 = 0x1cu;
    goto L_102ec9ee;
L_102ec998: ;
    loc_14 = 0x1du;
    goto L_102ec9ee;
L_102ec99c: ;
    loc_14 = 0x1eu;
    goto L_102ec9ee;
L_102ec9a0: ;
    loc_14 = 0x1fu;
    goto L_102ec9ee;
L_102ec9a4: ;
    loc_14 = 0x20u;
    goto L_102ec9ee;
L_102ec9a8: ;
    loc_14 = 0x21u;
    goto L_102ec9ee;
L_102ec9ac: ;
    loc_14 = 0x22u;
    goto L_102ec9ee;
L_102ec9b0: ;
    loc_14 = 0x23u;
    goto L_102ec9ee;
L_102ec9b4: ;
    loc_14 = 0x24u;
    goto L_102ec9ee;
L_102ec9b8: ;
    loc_14 = 0x25u;
    goto L_102ec9ee;
L_102ec9bc: ;
    loc_14 = 0x26u;
    goto L_102ec9ee;
L_102ec9c0: ;
    loc_14 = 0x27u;
    goto L_102ec9ee;
L_102ec9c4: ;
    loc_14 = 0x28u;
    goto L_102ec9ee;
L_102ec9c8: ;
    loc_14 = 0x29u;
    goto L_102ec9ee;
L_102ec9cc: ;
    loc_14 = 0x2au;
    goto L_102ec9ee;
L_102ec9d0: ;
    loc_14 = 0x2bu;
    goto L_102ec9ee;
L_102ec9d4: ;
    loc_14 = 0x2cu;
    goto L_102ec9ee;
L_102ec9d8: ;
    loc_14 = 0x2du;
    goto L_102ec9ee;
L_102ec9dc: ;
    loc_14 = 0x2eu;
    goto L_102ec9ee;
L_102ec9e0: ;
    loc_14 = 0x2fu;
    goto L_102ec9ee;
L_102ec9e4: ;
    loc_14 = 0x30u;
    goto L_102ec9ee;
L_102ec9e8: ;
    loc_14 = 0x31u;
    goto L_102ec9ee;
L_102ec9ec: ;
    loc_14 = 0x32u;
    goto L_102ec9ee;
L_102eca73: ;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103ccfb0u) + edx * 2u) == 0u)
    {
        esi = edx * 2u;
        edx = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccfb0u) + edx * 2u);
        goto L_102ecaa3;
    }
    esi = edx * 2u;
    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccfb0u) + edx * 2u);
    if ((int32_t)(ecx + edx) < 0)
    {
        edx = ecx + edx;
        goto L_102ecaa3;
    }
    edx = ecx + edx;
    if ((int32_t)edx > 263) goto L_102ecaa3;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103cd1f0u) + edx * 2u) != ecx)
    {
        edx = edx * 2u;
        goto L_102ecaa3;
    }
    edx = edx * 2u;
    esi = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccfe0u) + edx);
L_102ecaaa: ;
    if (eax >= COW_IMG(0x109b2606u)) goto L_102ecb89;
    wr32(COW_IMG(0x109b2614u), eax + 2u);
    wr16(eax + 2u, (uint16_t)esi);
    eax = rd32(COW_IMG(0x109b260cu));
L_102ecb68: ;
    wr32(COW_IMG(0x109b2610u), rd32(COW_IMG(0x109b2610u)) + 4u);
    wr32(rd32(COW_IMG(0x109b2610u)), eax);
    eax = rd32(COW_IMG(0x109b2618u));
    goto L_102ec7e6;
L_102ecaa3: ;
    esi = (uint32_t)(int16_t)rd16(COW_IMG(0x103ccdf0u) + esi);
    goto L_102ecaaa;
L_102ecac9: ;
    if (rd32(COW_IMG(0x109b261cu)) == 0u)
    {
        g->edx = edx;
        t6 = rd32(COW_IMG(0x109b2628u));
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102ea931u), 5, t6, COW_IMG(0x103465dcu), in_edi, in_esi, in_ebp);
        t7 = g->edx;
        wr32(COW_IMG(0x109b2620u), rd32(COW_IMG(0x109b2620u)) + 1u);
        eax = rd32(COW_IMG(0x109b2618u));
        edx = t7;
    }
    if ((int32_t)rd32(COW_IMG(0x109b261cu)) >= 3) goto L_102ecb80;
    wr32(COW_IMG(0x109b261cu), 3u);
    ecx = rd32(COW_IMG(0x109b2614u));
L_102ecb0f: ;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x103cce20u) + (uint32_t)(int16_t)rd16(ecx) * 2u) == 0u) goto L_102ecb30;
    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x103cce20u) + (uint32_t)(int16_t)rd16(ecx) * 2u);
    if ((int32_t)(eax + 0x100u) < 0) goto L_102ecb30;
    eax = eax + 0x100u;
    if ((int32_t)eax > 263) goto L_102ecb30;
    if (rd16(COW_IMG(0x103cd1f0u) + eax * 2u) == 0x100u) goto L_102ecb48;
L_102ecb30: ;
    if (ecx <= COW_IMG(0x109b2220u)) goto L_102ecb9b;
    wr32(COW_IMG(0x109b2610u), rd32(COW_IMG(0x109b2610u)) - 4u);
    wr32(COW_IMG(0x109b2614u), ecx - 2u);
    ecx = ecx - 2u;
    goto L_102ecb0f;
L_102ecb48: ;
    if (ecx >= COW_IMG(0x109b2606u))
    {
        edx = 0x100u;
        goto L_102ecb89;
    }
    t8 = rd16(COW_IMG(0x103ccfe0u) + eax * 2u);
    wr32(COW_IMG(0x109b2614u), ecx + 2u);
    wr16(ecx + 2u, (uint16_t)t8);
    eax = rd32(COW_IMG(0x109b2608u));
    edx = 0x100u;
    esi = (uint32_t)(int16_t)t8;
    goto L_102ecb68;
L_102ecb80: ;
    if (eax == 0u) goto L_102ecb9b;
    goto L_102ec7de;
L_102ecb89: ;
    t17 = rd32(COW_IMG(0x109b2628u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102ea931u), 5, t17, COW_IMG(0x10346a5cu), in_edi, in_esi, in_ebp);
L_102ecb9b: ;
    eax = 1u;
    goto L_102ecb9e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ec7ae(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ec7ae(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
