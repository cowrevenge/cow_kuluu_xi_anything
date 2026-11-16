/* f_0x10248c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10248c00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t of;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = arg2;
    ebx = 0u;
    ebp = arg3;
L_10248c12: ;
    if ((int32_t)(((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax)) > 1179011410)
    {
        ecx = ((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax);
        eax = eax + 4u;
        goto L_10248d7b;
    }
    ecx = ((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax);
    zf = (((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax)) == 0x46464952u;
    eax = eax + 4u;
    if (zf) goto L_10248d56;
    if (ecx == 0x20657563u) goto L_10248cda;
    if (ecx != 0x20746d66u) goto L_10248d83;
    t1 = ((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax);
    t2 = rd8(eax + 7u) << 8u;
    wr32(arg1 + 4u, t2);
    t3 = t2 + rd8(eax + 6u);
    wr32(arg1 + 4u, t3);
    t4 = rd8(eax + 0x13u) << 8u;
    wr32(arg1 + 8u, t4);
    t5 = t4 + rd8(eax + 0x12u);
    wr32(arg1 + 8u, t5);
    t6 = rd8(eax + 0xbu) << 8u;
    wr32(arg1 + 0xcu, t6);
    t7 = t6 * 0x100u + rd8(eax + 0xau) * 0x100u;
    wr32(arg1 + 0xcu, t7);
    t8 = t7 * 0x100u + rd8(eax + 9u) * 0x100u;
    wr32(arg1 + 0xcu, t8);
    t9 = t8 + rd8(eax + 8u);
    wr32(arg1 + 0xcu, t9);
    eax = eax + 4u;
    edi = t1;
L_10248dd0: ;
    eax = eax + edi;
L_10248dd2: ;
    if (ebp == 0u) goto L_10248df0;
    if ((int32_t)(ebp - edi - 8u) > 0)
    {
        ebp = ebp - edi - 8u;
        goto L_10248c12;
    }
L_10248df0: ;
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
    {
        edi = rd32(arg1 + 0x1cu);
        goto L_10248e44;
    }
    edi = rd32(arg1 + 0x1cu);
    t16 = rd32(arg1 + 8u) + ((uint32_t)((int32_t)rd32(arg1 + 8u) >> 0x1fu) & 7u);
    t17 = cow_divs(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t16 >> 3u) * rd32(arg1 + 4u));
    t18 = cow_mods(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t16 >> 3u) * rd32(arg1 + 4u));
    t19 = rd32(arg1 + 0x14u);
    wr32(arg1 + 0x18u, t17);
    if ((int32_t)t19 < (int32_t)rd32(arg1 + 0x10u))
    {
        eax = rd32(arg1 + 0x10u);
        wr32(arg1 + 0x14u, 0xffffffffu);
        wr32(arg1 + 0x10u, 0xffffffffu);
    }
    if ((int32_t)rd32(arg1 + 0x14u) <= 0) goto L_10248e44;
    eax = rd32(arg1 + 0x14u);
    if ((int32_t)rd32(arg1 + 0x18u) >= (int32_t)(eax + 1u))
    {
        zf = rd32(arg1 + 0x18u) == eax + 1u;
        sf = (int32_t)(rd32(arg1 + 0x18u) - (eax + 1u)) < 0;
        of = ((rd32(arg1 + 0x18u) ^ eax + 1u) & (rd32(arg1 + 0x18u) ^ rd32(arg1 + 0x18u) - (eax + 1u))) >> 0x1fu;
        eax = eax + 1u;
        goto L_10248e3f;
    }
    ecx = rd32(arg1 + 0x18u);
    wr32(arg1 + 0x14u, ecx - 1u);
    return edi;
L_10248cda: ;
    t10 = ((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax);
    t11 = rd8(eax + 0xcu) + rd8(eax + 0xdu) * 0x100u + rd8(eax + 0xeu) * 0x10000u + rd8(eax + 0xfu) * 0x1000000u;
    t12 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x10u, t11);
    if (t12 != 0u)
    {
        eax = eax + 4u;
        edi = t10;
    }
    else
    {
        eax = eax + 4u;
        ecx = t11;
        edi = t10;
        wr32(arg1 + 0x14u, ecx + 0x1cu);
    }
    t13 = rd8(eax + 0x20u) + rd8(eax + 0x21u) * 0x100u + rd8(eax + 0x22u) * 0x10000u + rd8(eax + 0x23u) * 0x1000000u;
    wr32(arg1 + 0x14u, t13);
    goto L_10248dd0;
L_10248d56: ;
    if (rd8(eax + 4u) != 0x57u) goto L_10248d83;
    if (rd8(eax + 5u) != 0x41u) goto L_10248d83;
    if (rd8(eax + 6u) != 0x56u) goto L_10248d83;
    if (rd8(eax + 7u) != 0x45u) goto L_10248d83;
    eax = eax + 8u;
    ebx = ebx + 1u;
    edi = 4u;
    goto L_10248dd2;
L_10248d7b: ;
    if (ecx == 0x61746164u) goto L_10248daa;
L_10248d83: ;
    if (ebx == 0u) goto L_10248de9;
    t14 = ((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax);
    eax = eax + t14 + 4u;
    edi = t14;
    goto L_10248dd2;
L_10248daa: ;
    t15 = ((rd8(eax + 3u) << 8u | rd8(eax + 2u)) << 8u | rd8(eax + 1u)) << 8u | rd8(eax);
    wr32(arg1 + 0x1cu, eax + 4u);
    wr32(arg1 + 0x18u, t15);
    eax = eax + 4u;
    edi = t15;
    goto L_10248dd0;
L_10248de9: ;
    wr32(arg1 + 0x1cu, 0u);
    goto L_10248df0;
L_10248e3f: ;
    if (!(zf || sf != of))
    {
        wr32(arg1 + 0x18u, eax);
    }
L_10248e44: ;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10248c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10248c00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
