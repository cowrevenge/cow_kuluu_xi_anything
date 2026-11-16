/* f_0x101fd290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101fd290(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if ((rd8(rd32(sp0 + 4u)) & 0x7fu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 4u));
        goto L_101fd589;
    }
    eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 4u));
    ebx = rd32(sp0 + 4u);
    t1 = (eax & 0x7fu) + 0x703fu;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x101fd1f0u), t1, self, g->edx, 0, 2, t1, 0u);
    ecx = 0u;
    edx = 0x1000000u;
    ebp = rd32(ebx) >> 7u;
    esi = rd32(sp0 + 4u);
    edi = rd32(sp0 + 4u);
L_101fd2cd: ;
    if ((edx & ebp) == 0u) goto L_101fd3e1;
    if (ecx > 0xbu)
    {
        ecx = ecx + 1u;
        goto L_101fd3d7;
    }
    eax = ecx;
    ecx = ecx + 1u;
    t2 = rd32(COW_IMG(0x101fd598u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x101fd2e8u: goto L_101fd2e8;
    case 0x101fd2f6u: goto L_101fd2f6;
    case 0x101fd307u: goto L_101fd307;
    case 0x101fd320u: goto L_101fd320;
    case 0x101fd33cu: goto L_101fd33c;
    case 0x101fd34du: goto L_101fd34d;
    case 0x101fd35bu: goto L_101fd35b;
    case 0x101fd371u: goto L_101fd371;
    case 0x101fd38au: goto L_101fd38a;
    case 0x101fd398u: goto L_101fd398;
    case 0x101fd3acu: goto L_101fd3ac;
    case 0x101fd3c2u: goto L_101fd3c2;
    default: rt_fatal(g, COW_IMG(0x101fd2e1u), "switch");
    }
    return 0;
L_101fd2e8: ;
    esi = rd32(ebx + 4u);
    edi = rd32(ebx + 0x10u) >> 0xcu;
L_101fd3ce: ;
    esi = esi & 0x1ffu;
L_101fd3d4: ;
    edi = edi & 3u;
L_101fd3d7: ;
    if ((int32_t)rd32(COW_IMG(0x10663aa8u)) <= (int32_t)(esi - 1u))
    {
        eax = rd32(COW_IMG(0x10663aa8u));
        goto L_101fd432;
    }
    esi = esi - 1u;
L_101fd3e1: ;
    if (edx >> 1u != 0u)
    {
        edx = edx >> 1u;
        goto L_101fd2cd;
    }
    wr32(sp0 + 4u, 0u);
    eax = 0x1000000u;
    loc_c = 0u;
    loc_8 = 0x1000000u;
L_101fd3fc: ;
    if ((eax & rd32(ebx) >> 7u) == 0u) goto L_101fd572;
    t5 = cow_divs(g, loc_c, 5u);
    t6 = cow_mods(g, loc_c, 5u);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t7 + 1u);
    if (t7 > 0xbu)
    {
        eax = t5;
        ebp = t6;
        goto L_101fd52e;
    }
    eax = t5;
    ecx = t7;
    edx = t7 + 1u;
    ebp = t6;
    t8 = rd32(COW_IMG(0x101fd5c8u) + ecx * 4u);
    switch (t8 - RD)
    {
    case 0x101fd43eu: goto L_101fd43e;
    case 0x101fd44cu: goto L_101fd44c;
    case 0x101fd45du: goto L_101fd45d;
    case 0x101fd476u: goto L_101fd476;
    case 0x101fd492u: goto L_101fd492;
    case 0x101fd4a3u: goto L_101fd4a3;
    case 0x101fd4b1u: goto L_101fd4b1;
    case 0x101fd4c7u: goto L_101fd4c7;
    case 0x101fd4e1u: goto L_101fd4e1;
    case 0x101fd4efu: goto L_101fd4ef;
    case 0x101fd503u: goto L_101fd503;
    case 0x101fd519u: goto L_101fd519;
    default: rt_fatal(g, COW_IMG(0x101fd42bu), "switch");
    }
    return 0;
L_101fd2f6: ;
    esi = rd32(ebx + 4u) >> 9u;
    edi = rd32(ebx + 0x10u) >> 0xeu;
    goto L_101fd3ce;
L_101fd307: ;
    t4 = rd8(ebx + 0x12u) & 3u;
    esi = rd32(ebx + 4u) >> 0x12u & 0x1ffu;
    edi = t4;
    goto L_101fd3d7;
L_101fd320: ;
    esi = (rd32(ebx + 8u) & 0xfu) * 0x20u + (rd32(ebx + 4u) >> 0x1bu);
    edi = rd32(ebx + 0x10u) >> 0x12u;
    goto L_101fd3d4;
L_101fd33c: ;
    esi = rd32(ebx + 8u) >> 4u;
    edi = rd32(ebx + 0x10u) >> 0x14u;
    goto L_101fd3ce;
L_101fd34d: ;
    esi = rd32(ebx + 8u) >> 0xdu;
    edi = rd32(ebx + 0x10u) >> 0x16u;
    goto L_101fd3ce;
L_101fd35b: ;
    t3 = rd8(ebx + 0x13u) & 3u;
    esi = rd32(ebx + 8u) >> 0x16u & 0x1ffu;
    edi = t3;
    goto L_101fd3d7;
L_101fd371: ;
    esi = (uint8_t)rd32(ebx + 0xcu) * 2u + (rd32(ebx + 8u) >> 0x1fu);
    edi = rd32(ebx + 0x10u) >> 0x1au;
    goto L_101fd3d4;
L_101fd38a: ;
    esi = rd32(ebx + 0xcu) >> 8u;
    edi = rd32(ebx + 0x10u) >> 0x1cu;
    goto L_101fd3ce;
L_101fd398: ;
    esi = rd32(ebx + 0xcu) >> 0x11u & 0x1ffu;
    edi = rd32(ebx + 0x10u) >> 0x1eu;
    goto L_101fd3d7;
L_101fd3ac: ;
    esi = (rd32(ebx + 0x10u) & 7u) * 0x40u + (rd32(ebx + 0xcu) >> 0x1au);
    edi = rd32(ebx + 0x14u);
    goto L_101fd3d4;
L_101fd3c2: ;
    esi = rd32(ebx + 0x10u) >> 3u;
    edi = rd32(ebx + 0x14u) >> 2u;
    goto L_101fd3ce;
L_101fd432: ;
    return eax & 0xffffff00u;
L_101fd43e: ;
    esi = rd32(ebx + 4u);
    edi = rd32(ebx + 0x10u) >> 0xcu;
L_101fd525: ;
    esi = esi & 0x1ffu;
L_101fd52b: ;
    edi = edi & 3u;
L_101fd52e: ;
    if ((int8_t)(rd16(COW_IMG(0x103850a8u) + edi * 2u + (rd8(COW_IMG(0x106638a8u) + esi - 1u) >> 4u) * 0xau + 2u) >> 8u) < 0)
    {
        edx = COW_IMG(0x106638a8u) + esi - 1u;
        esi = esi - 1u;
    }
    else
    {
        ecx = (COW_IMG(0x103850a8u) + (rd8(COW_IMG(0x106638a8u) + esi - 1u) >> 4u) * 0xau & 0xffff0000u) | rd16(COW_IMG(0x103850a8u) + edi * 2u + (rd8(COW_IMG(0x106638a8u) + esi - 1u) >> 4u) * 0xau + 2u);
        edx = COW_IMG(0x106638a8u) + esi - 1u;
        esi = esi - 1u;
        if ((ecx >> 8u & 0x40u) != 0u)
        {
            ebp = ebp - 1u;
        }
        else
        {
            ebp = ebp - 1u;
            ebp = ebp - 1u;
        }
    }
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x101fda30u), self, 5, esi + 0x7080u, ebp, eax, edx, edi);
    eax = loc_8;
L_101fd572: ;
    if (eax >> 1u != 0u)
    {
        loc_c = loc_c + 1u;
        loc_8 = eax >> 1u;
        eax = eax >> 1u;
        goto L_101fd3fc;
    }
    eax = eax >> 1u;
L_101fd589: ;
    return (eax & 0xffffff00u) | 1u;
L_101fd44c: ;
    esi = rd32(ebx + 4u) >> 9u;
    edi = rd32(ebx + 0x10u) >> 0xeu;
    goto L_101fd525;
L_101fd45d: ;
    t10 = rd8(ebx + 0x12u) & 3u;
    esi = rd32(ebx + 4u) >> 0x12u & 0x1ffu;
    edi = t10;
    goto L_101fd52e;
L_101fd476: ;
    esi = (rd32(ebx + 8u) & 0xfu) * 0x20u + (rd32(ebx + 4u) >> 0x1bu);
    edi = rd32(ebx + 0x10u) >> 0x12u;
    goto L_101fd52b;
L_101fd492: ;
    esi = rd32(ebx + 8u) >> 4u;
    edi = rd32(ebx + 0x10u) >> 0x14u;
    goto L_101fd525;
L_101fd4a3: ;
    esi = rd32(ebx + 8u) >> 0xdu;
    edi = rd32(ebx + 0x10u) >> 0x16u;
    goto L_101fd525;
L_101fd4b1: ;
    t9 = rd8(ebx + 0x13u) & 3u;
    esi = rd32(ebx + 8u) >> 0x16u & 0x1ffu;
    edi = t9;
    goto L_101fd52e;
L_101fd4c7: ;
    esi = (uint8_t)rd32(ebx + 0xcu) * 2u + (rd32(ebx + 8u) >> 0x1fu);
    edi = rd32(ebx + 0x10u) >> 0x1au;
    goto L_101fd52b;
L_101fd4e1: ;
    esi = rd32(ebx + 0xcu) >> 8u;
    edi = rd32(ebx + 0x10u) >> 0x1cu;
    goto L_101fd525;
L_101fd4ef: ;
    esi = rd32(ebx + 0xcu) >> 0x11u & 0x1ffu;
    edi = rd32(ebx + 0x10u) >> 0x1eu;
    goto L_101fd52e;
L_101fd503: ;
    esi = (rd32(ebx + 0x10u) & 7u) * 0x40u + (rd32(ebx + 0xcu) >> 0x1au);
    edi = rd32(ebx + 0x14u);
    goto L_101fd52b;
L_101fd519: ;
    esi = rd32(ebx + 0x10u) >> 3u;
    edi = rd32(ebx + 0x14u) >> 2u;
    goto L_101fd525;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fd290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fd290(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
