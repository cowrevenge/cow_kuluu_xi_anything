/* f_0x101b8850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_101b8850(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_174;
    uint32_t loc_178;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 404u);

    wr32(sp0 - 0x17cu, in_ebx);
    wr32(sp0 - 0x180u, in_ebp);
    wr32(sp0 - 0x184u, in_esi);
    wr32(sp0 - 0x188u, in_edi);
    wr32(sp0 - 0x16cu, self);
    if ((int32_t)rd32(arg6) < 0)
    {
        eax = rd32(arg6);
        goto L_101b8878;
    }
    eax = rd32(arg6);
    if ((int32_t)eax < (int32_t)arg2)
    {
        ecx = self;
        goto L_101b888c;
    }
L_101b8878: ;
    wr32(sp0 - 0x18cu, COW_IMG(0x1037c8f4u));
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x18cu;
    t1 = cow_stdcall(g, COW_IMG(0x101908d0u), 0);
    t2 = g->ecx;
    wr32(self + 0x28u, 0u);
    eax = t1;
    ecx = t2;
L_101b888c: ;
    if ((int32_t)arg2 <= 1)
    {
        edx = 0u;
    }
    else
    {
        edx = 0u;
        esi = arg1;
L_101b88a6: ;
        if (rd8(esi) != 0x7fu) goto L_101b88b8;
        if (rd8(arg1 + edx + 1u) == 0xffu) goto L_101b88c1;
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx + 1u);
        if ((uint8_t)ecx == 0xfeu) goto L_101b88c1;
L_101b88b8: ;
        if ((int32_t)(esi - arg1 + 2u) < (int32_t)arg2)
        {
            ecx = esi - arg1 + 2u;
            edx = edx + 1u;
            esi = esi + 1u;
            goto L_101b88a6;
        }
        edx = edx + 1u;
    }
L_101b88c1: ;
    if (edx + 1u == arg2)
    {
        eax = 0xffffffffu;
        goto L_101b8bf6;
    }
    ecx = edx + 1u;
    wr32(sp0 - 0x174u, edx);
    if ((int32_t)(ecx + 1u) >= (int32_t)arg2)
    {
        esi = edx;
        loc_174 = edx;
        goto L_101b88ee;
    }
    esi = edx;
    loc_174 = edx;
    edx = ecx + 1u;
L_101b88db: ;
    if (rd8(arg1 + edx - 1u) != 0x7fu) goto L_101b88e8;
    if (rd8(arg1 + ecx + 1u) == 0xffu) goto L_101b88ee;
L_101b88e8: ;
    if ((int32_t)(edx + 1u) < (int32_t)arg2)
    {
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_101b88db;
    }
    ecx = ecx + 1u;
L_101b88ee: ;
    if ((int32_t)(ecx + 1u) >= (int32_t)arg2)
    {
        edi = 0u;
    }
    else
    {
        wr32(sp0 - 0x170u, ecx);
        edi = 1u;
    }
    if ((int32_t)arg2 <= 1)
    {
        edx = 0u;
    }
    else
    {
        ecx = 1u;
        edx = 0u;
L_101b890a: ;
        if (rd8(arg1 + ecx - 1u) != 0x7fu) goto L_101b8918;
        if (rd8(arg1 + edx + 1u) == 0xfeu) goto L_101b891e;
L_101b8918: ;
        if ((int32_t)(ecx + 1u) < (int32_t)arg2)
        {
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_101b890a;
        }
        edx = edx + 1u;
    }
L_101b891e: ;
    wr32(sp0 - 0x178u, edx);
    if ((int32_t)(edx + 1u) < (int32_t)arg2)
    {
        loc_178 = edx;
    }
    else
    {
        wr32(sp0 - 0x178u, esi);
        loc_178 = esi;
    }
    if ((int32_t)loc_174 >= (int32_t)rd32(arg6))
    {
        ecx = loc_174;
        esi = rd32(arg6);
        if ((int32_t)esi <= 0)
        {
            edx = 0u;
            goto L_101b8979;
        }
        edx = 0u;
L_101b894e: ;
        if (rd8(arg1 + edx) < 0x80u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx);
            goto L_101b895b;
        }
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + edx);
        if ((uint8_t)ecx <= 0x9fu) goto L_101b8965;
L_101b895b: ;
        if ((uint8_t)ecx < 0xe0u) goto L_101b896a;
        if ((uint8_t)ecx > 0xffu) goto L_101b896a;
L_101b8965: ;
        edx = edx + 2u;
L_101b8975: ;
        if ((int32_t)edx < (int32_t)esi) goto L_101b894e;
L_101b8979: ;
        if (edx != esi)
        {
            wr32(arg6, esi - 1u);
        }
    }
    else
    {
        wr32(arg6, 0u);
    }
    t3 = rd32(edi * 4u + sp0 - 0x174u) - rd32(arg6);
    t4 = rd32(arg6);
    esi = arg1 + t4;
    edi = sp0 - 0x168u;
    ecx = t3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(sp0 + t3 - 0x168u, 0x7fu);
    wr8(sp0 + t3 - 0x167u, 0xffu);
    wr32(sp0 - 0x18cu, sp0 - 0x168u);
    wr8(sp0 + t3 - 0x166u, 0u);
    g->edx = t3;
    g->esp = sp0 - 0x178u;
    t5 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x168u, ecx, g->edx, 1, 5, sp0 - 0x168u, in_edi, in_esi, in_ebp, in_ebx);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 <= (int32_t)arg5)
    {
        edi = 0u;
        goto L_101b8a1d;
    }
    ecx = t6;
    edx = t7;
    ebp = t5;
    esi = t3 + 2u;
    edi = 0u;
L_101b89d5: ;
    if ((int32_t)edi >= (int32_t)esi) goto L_101b8a1d;
    if (rd8(edi + sp0 - 0x168u) < 0x80u)
    {
        eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x168u);
        goto L_101b89e5;
    }
    eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x168u);
    if ((uint8_t)eax <= 0x9fu) goto L_101b89ed;
L_101b89e5: ;
    if ((uint8_t)eax < 0xe0u) goto L_101b89f7;
    if ((uint8_t)eax > 0xffu) goto L_101b89f7;
L_101b89ed: ;
    eax = 0xeu;
    edi = edi + 2u;
L_101b8a10: ;
    if ((int32_t)(ebp - eax) > (int32_t)arg5)
    {
        ebp = ebp - eax;
        goto L_101b89d5;
    }
L_101b8a1d: ;
    t12 = edi + rd32(arg6);
    wr32(arg6, t12);
    if ((int32_t)rd32(sp0 - 0x174u) >= (int32_t)rd32(arg6))
    {
        eax = rd32(sp0 - 0x178u);
    }
    else
    {
        eax = rd32(sp0 - 0x178u);
        edx = 0u;
L_101b8a3a: ;
        if ((int32_t)rd32(arg6) <= 0) goto L_101b8a9a;
        if ((int32_t)rd32(arg6) <= 0) goto L_101b8a86;
        ecx = 0u;
L_101b8a54: ;
        if (rd8(arg1 + ecx) < 0x80u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
            goto L_101b8a5f;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
        if ((uint8_t)eax <= 0x9fu) goto L_101b8a67;
L_101b8a5f: ;
        if ((uint8_t)eax < 0xe0u) goto L_101b8a71;
        if ((uint8_t)eax > 0xffu) goto L_101b8a71;
L_101b8a67: ;
        eax = 1u;
        ecx = ecx + 2u;
L_101b8a82: ;
        if ((int32_t)ecx < (int32_t)rd32(arg6)) goto L_101b8a54;
L_101b8a86: ;
        if (eax == 0u)
        {
            ecx = rd32(arg6);
            ecx = ecx - 1u;
        }
        else
        {
            ecx = rd32(arg6);
            ecx = ecx - 2u;
        }
        wr32(arg6, ecx);
        if ((int32_t)(edx + 1u) < 5)
        {
            edx = edx + 1u;
            goto L_101b8a3a;
        }
    }
L_101b8a9a: ;
    if ((int32_t)rd32(sp0 - 0x174u) >= (int32_t)rd32(arg6)) goto L_101b8aed;
    ecx = rd32(arg6);
    esi = rd32(sp0 - 0x174u);
L_101b8aab: ;
    if ((int32_t)ecx <= 0) goto L_101b8aed;
    if ((int32_t)rd32(arg6) <= 0) goto L_101b8adb;
    ecx = 0u;
L_101b8ab7: ;
    if (rd8(arg1 + ecx) < 0x80u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
        goto L_101b8ac2;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    if ((uint8_t)eax <= 0x9fu) goto L_101b8aca;
L_101b8ac2: ;
    if ((uint8_t)eax < 0xe0u) goto L_101b8ad4;
    if ((uint8_t)eax > 0xffu) goto L_101b8ad4;
L_101b8aca: ;
    eax = 1u;
    ecx = ecx + 2u;
L_101b8ad7: ;
    if ((int32_t)ecx < (int32_t)rd32(arg6)) goto L_101b8ab7;
L_101b8adb: ;
    if (eax == 0u)
    {
        ecx = rd32(arg6);
        ecx = ecx - 1u;
    }
    else
    {
        ecx = rd32(arg6);
        ecx = ecx - 2u;
    }
    wr32(arg6, ecx);
    if ((int32_t)esi < (int32_t)ecx) goto L_101b8aab;
L_101b8aed: ;
    t13 = arg2 - rd32(arg6);
    t14 = rd32(arg6);
    esi = arg1 + t14;
    edi = sp0 - 0x168u;
    ecx = t13 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x18cu, sp0 - 0x168u);
    ecx = t13 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(sp0 + t13 - 0x168u, 0u);
    g->edx = t13;
    g->esp = sp0 - 0x178u;
    t15 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x168u, ecx, g->edx, 1, 5, sp0 - 0x168u, rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu));
    t16 = g->edx;
    if ((int32_t)t15 <= (int32_t)arg5)
    {
        ecx = arg5;
        ebp = t13;
    }
    else
    {
        eax = t15;
        edx = t16;
        ebp = t13;
        edi = rd32(sp0 - 0x16cu);
L_101b8b3b: ;
        wr32(sp0 - 0x18cu, ebp);
        wr32(sp0 - 0x190u, sp0 - 0x168u);
        g->eax = eax;
        g->esp = sp0 - 0x188u;
        t17 = cow_thiscall(g, COW_IMG(0x101b8c10u), edi, 2, sp0 - 0x168u, ebp);
        t18 = g->ecx;
        wr32(sp0 - 0x18cu, sp0 - 0x168u);
        g->edx = sp0 - 0x168u;
        g->esp = sp0 - 0x178u;
        t19 = cow_call_regs(g, COW_IMG(0x10190830u), t17, t18, g->edx, 1, 5, sp0 - 0x168u, rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu));
        t20 = g->ecx;
        t21 = g->edx;
        if ((int32_t)t19 > (int32_t)arg5)
        {
            eax = t19;
            edx = t21;
            ebp = t17;
            goto L_101b8b3b;
        }
        ecx = t20;
        ebp = t17;
    }
    if ((int32_t)rd32(arg6) < 0) goto L_101b8b96;
    eax = rd32(arg6);
L_101b8b6f: ;
    if (rd8(arg1 + eax) != 0x7fu) goto L_101b8b83;
    if ((int8_t)rd8(arg1 + eax + 1u) < 100)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
        goto L_101b8b83;
    }
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
    if ((int8_t)ecx <= 103) goto L_101b8b88;
L_101b8b83: ;
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        goto L_101b8b6f;
    }
L_101b8b96: ;
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, 0x64u);
L_101b8b9d: ;
    if ((int32_t)rd32(sp0 - 0x178u) >= (int32_t)rd32(arg6))
    {
        ecx = ebp;
        goto L_101b8bdd;
    }
    ecx = ebp;
    wr8(arg3 + 2u, 0x7fu);
    wr8(arg3 + 3u, 0xfeu);
    esi = sp0 - 0x168u;
    edi = arg3 + 4u;
    ecx = ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->ebx = rd32(sp0 - 0x17cu);
    g->esi = rd32(sp0 - 0x184u);
    g->edi = rd32(sp0 - 0x188u);
    g->ebp = rd32(sp0 - 0x180u);
    g->edx = ecx;
    return ebp + 4u;
L_101b896a: ;
    if ((uint8_t)ecx != 0x7fu)
    {
        edx = edx + 1u;
    }
    else
    {
        edx = edx + 2u;
    }
    goto L_101b8975;
L_101b89f7: ;
    if ((uint8_t)eax != 0x7fu)
    {
        t8 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
        wr32(sp0 - 0x18cu, t8);
        g->eax = eax;
        g->ecx = t8;
        g->edx = edx;
        g->esp = sp0 - 0x188u;
        t9 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t8);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = edi + 1u;
    }
    else
    {
        eax = 0u;
        edi = edi + 2u;
    }
    goto L_101b8a10;
L_101b8a71: ;
    if ((uint8_t)eax != 0x7fu)
    {
        eax = 0u;
        ecx = ecx + 1u;
    }
    else
    {
        eax = 1u;
        ecx = ecx + 2u;
    }
    goto L_101b8a82;
L_101b8ad4: ;
    eax = 0u;
    ecx = ecx + 1u;
    goto L_101b8ad7;
L_101b8b88: ;
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, rd8(arg1 + eax + 1u));
    if ((int32_t)eax >= 0) goto L_101b8b9d;
    goto L_101b8b96;
L_101b8bdd: ;
    esi = sp0 - 0x168u;
    edi = arg3 + 2u;
    ecx = ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg3 + ebp + 2u, 0u);
    eax = ebp + 2u;
    edx = arg3;
L_101b8bf6: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b8850(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
