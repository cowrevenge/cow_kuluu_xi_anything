/* f_0x101ac5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_101ac5e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_394;
    uint32_t loc_398;
    uint32_t loc_3a0;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 976u);

    wr32(sp0 - 0x3a4u, in_ebx);
    wr32(sp0 - 0x3a8u, in_ebp);
    wr32(sp0 - 0x3acu, in_esi);
    wr32(sp0 - 0x3b0u, in_edi);
    wr32(sp0 - 0x390u, self);
    if (arg2 == 0u)
    {
        edx = in_edx;
        goto L_101ac88c;
    }
    wr32(sp0 - 0x3b4u, 0u);
    wr32(sp0 - 0x3b8u, arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3b0u;
    t1 = cow_stdcall(g, COW_IMG(0x101ad1b0u), 2, arg1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t3;
        goto L_101ac88c;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((int32_t)arg2 >= 2) goto L_101ac62b;
    g->ebx = rd32(sp0 - 0x3a4u);
    g->esi = rd32(sp0 - 0x3acu);
    g->edi = rd32(sp0 - 0x3b0u);
    g->ebp = rd32(sp0 - 0x3a8u);
    g->edx = edx;
    return 0xffffffffu;
L_101ac62b: ;
    wr32(sp0 - 0x38cu, 0u);
    if (rd8(arg1 + 1u) >= 7u)
    {
        ecx = rd32(self + 0x3cu);
        loc_398 = rd8(arg1 + 3u) << 0x10u | rd8(arg1 + 4u) << 0x18u | rd8(arg1 + 1u) | rd8(rd32(self + 0x3cu) + 4u) << 8u;
        loc_3a0 = (rd32(sp0 - 0x3a0u) & 0xffffffu) | 0x1000000u;
        goto L_101ac6bd;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
    ecx = rd32(self + 0x3cu);
    edx = (edx & 0xffffff00u) | rd8(rd32(self + 0x3cu) + 4u);
    loc_398 = rd8(arg1 + 3u) << 0x10u | rd8(arg1 + 4u) << 0x18u | rd8(arg1 + 1u) | rd8(rd32(self + 0x3cu) + 4u) << 8u;
    loc_3a0 = (rd32(sp0 - 0x3a0u) & 0xffffffu) | 0x1000000u;
    if ((uint8_t)eax != 6u) goto L_101ac6bd;
    if ((int8_t)rd8(arg1 + 5u) < 0) goto L_101ac6e4;
    ecx = (uint32_t)(int8_t)rd8(arg1 + 5u);
    if ((int32_t)ecx > 450) goto L_101ac6e4;
    wr32(sp0 - 0x398u, ecx);
    t4 = ecx + rd32(arg5) + 7u;
    wr32(arg5, t4);
    esi = arg1 + 6u;
    edi = sp0 - 0x1c4u;
    ecx = ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x394u, ecx + 7u);
    ecx = ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = ecx + 7u;
    edx = ecx;
    loc_398 = ecx;
    loc_3a0 = loc_3a0 & 0xffffffu;
    loc_394 = ecx + 7u;
L_101ac6fe: ;
    if (loc_3a0 >> 0x18u == 0u)
    {
        ebp = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | loc_3a0 >> 0x18u;
        if ((uint8_t)arg6 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg6;
            ebp = 0u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg6;
            ebp = 2u;
        }
        if ((uint8_t)arg7 != 0u)
        {
            wr8(ebp + sp0 - 0x388u, 0x7fu);
            wr8(ebp + sp0 - 0x387u, 0x69u);
            ebp = ebp + 2u;
        }
    }
    if ((int32_t)loc_398 <= 0)
    {
        eax = loc_398;
        goto L_101ac826;
    }
    ebx = self;
    edi = 0u;
L_101ac747: ;
    wr32(sp0 - 0x3b4u, edi);
    wr32(sp0 - 0x3b8u, sp0 - 0x1c4u);
    g->edx = edx;
    g->esp = sp0 - 0x3b0u;
    t7 = cow_stdcall(g, COW_IMG(0x101ad1b0u), 2, sp0 - 0x1c4u, edi);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_101ac80f;
    }
    wr32(sp0 - 0x3b4u, 0u);
    wr32(sp0 - 0x3b8u, 0u);
    wr32(sp0 - 0x3bcu, sp0 - 0x38cu);
    wr32(sp0 - 0x3c0u, 0x1c2u - ebp);
    t9 = ebp + sp0 - 0x388u;
    wr32(sp0 - 0x3c4u, t9);
    t10 = arg2 - rd32(sp0 - 0x394u);
    wr32(sp0 - 0x3c8u, t10);
    t11 = arg1 + rd32(sp0 - 0x394u);
    wr32(sp0 - 0x3ccu, t11);
    g->edx = t10;
    t12 = rd32(sp0 - 0x390u);
    g->esp = sp0 - 0x3b0u;
    t13 = cow_thiscall(g, COW_IMG(0x101ac5e0u), t12, 7, t11, t10, t9, 0x1c2u - ebp, sp0 - 0x38cu, 0u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        edx = t15;
        zf = t13 == 0u;
        sf = (int32_t)t13 < 0;
        goto L_101ac7db;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    ebx = t9;
    esi = 0x1c2u - ebp;
    wr32(sp0 - 0x3b4u, esi);
    wr32(sp0 - 0x3b8u, ebx);
    t16 = rd8(edi + sp0 - 0x1c3u) | rd8(edi + sp0 - 0x1c1u) << 0x10u | rd8(edi + sp0 - 0x1c2u) << 8u | rd8(edi + sp0 - 0x1c0u) << 0x18u;
    wr32(sp0 - 0x3bcu, t16);
    t17 = rd8(edi + sp0 - 0x1c3u);
    t18 = rd8(edi + sp0 - 0x1c1u);
    t19 = rd8(edi + sp0 - 0x1c2u);
    t20 = rd8(edi + sp0 - 0x1c0u);
    g->esp = sp0 - 0x3b0u;
    t21 = cow_call_regs(g, COW_IMG(0x101bc100u), t16, rd32(rd32(sp0 - 0x390u) + 0x3cu), g->edx, 0, 3, t16, ebx, esi);
    eax = t21;
L_101ac7e1: ;
    t22 = rd32(sp0 - 0x38cu) + rd32(sp0 - 0x394u);
    wr32(sp0 - 0x394u, t22);
    t23 = rd32(arg5) + rd32(sp0 - 0x38cu);
    t24 = rd32(sp0 - 0x390u);
    wr32(arg5, t23);
    wr32(sp0 - 0x38cu, 0u);
    edx = t23;
    ebx = t24;
    ebp = eax + ebp;
    eax = arg5;
    edi = edi + 6u;
    loc_394 = t22;
L_101ac81c: ;
    if ((int32_t)edi < (int32_t)rd32(sp0 - 0x398u)) goto L_101ac747;
L_101ac826: ;
    if (loc_3a0 >> 0x18u != 0u)
    {
        eax = (eax & 0xffffff00u) | loc_3a0 >> 0x18u;
        if ((uint8_t)arg7 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg7;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg7;
            wr8(ebp + sp0 - 0x388u, 0x7fu);
            wr8(ebp + sp0 - 0x387u, 0x64u);
            ebp = ebp + 2u;
        }
        if ((uint8_t)arg6 != 0u)
        {
            wr8(ebp + sp0 - 0x388u, 0xefu);
            wr8(ebp + sp0 - 0x387u, 0x28u);
            ebp = ebp + 2u;
        }
    }
    esi = sp0 - 0x388u;
    edi = arg3;
    ecx = ebp >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebp & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg3 + ebp, 0u);
    g->ebx = rd32(sp0 - 0x3a4u);
    g->esi = rd32(sp0 - 0x3acu);
    g->edi = rd32(sp0 - 0x3b0u);
    g->ebp = rd32(sp0 - 0x3a8u);
    g->edx = ebp;
    return ebp;
L_101ac6bd: ;
    wr32(sp0 - 0x3b4u, 0x1c2u);
    wr32(sp0 - 0x3b8u, sp0 - 0x1c4u);
    wr32(sp0 - 0x3bcu, loc_398);
    wr32(sp0 - 0x394u, 6u);
    g->edx = loc_398;
    g->esp = sp0 - 0x3b0u;
    t5 = cow_call_regs(g, COW_IMG(0x101bc100u), sp0 - 0x1c4u, ecx, g->edx, 0, 3, loc_398, sp0 - 0x1c4u, 0x1c2u);
    t6 = g->edx;
    wr32(sp0 - 0x398u, t5);
    if ((int32_t)t5 >= 0)
    {
        edx = t6;
        loc_398 = t5;
        goto L_101ac6f4;
    }
    eax = t5;
    edx = t6;
L_101ac6e4: ;
    g->ebx = rd32(sp0 - 0x3a4u);
    g->esi = rd32(sp0 - 0x3acu);
    g->edi = rd32(sp0 - 0x3b0u);
    g->ebp = rd32(sp0 - 0x3a8u);
    g->edx = edx;
    return 0xffffffffu;
L_101ac6f4: ;
    wr32(arg5, rd32(arg5) + 6u);
    eax = arg5;
    loc_394 = 6u;
    goto L_101ac6fe;
L_101ac7db: ;
    if (zf || sf) goto L_101ac6e4;
    goto L_101ac7e1;
L_101ac80f: ;
    t25 = rd8(edi + sp0 - 0x1c4u);
    wr8(ebp + sp0 - 0x388u, (uint8_t)t25);
    edx = (edx & 0xffffff00u) | t25;
    ebp = ebp + 1u;
    edi = edi + 1u;
    goto L_101ac81c;
L_101ac88c: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ac5e0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
