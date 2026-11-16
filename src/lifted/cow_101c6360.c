/* f_0x101c6360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101c6360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_424;
    uint32_t loc_428;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1096u);

    wr32(sp0 - 0x42cu, in_ebx);
    wr32(sp0 - 0x430u, in_ebp);
    wr32(sp0 - 0x434u, in_esi);
    wr32(sp0 - 0x438u, in_edi);
    if ((int32_t)rd32(self + 0x6a4u) < 0) goto L_101c6383;
    eax = rd32(self + 0x6a4u);
    if ((int32_t)eax < (int32_t)arg2) goto L_101c6389;
L_101c6383: ;
    wr32(self + 0x6a4u, 0u);
L_101c6389: ;
    if ((int32_t)arg2 <= 1)
    {
        ecx = 0u;
    }
    else
    {
        eax = 1u;
        ecx = 0u;
L_101c639c: ;
        if (rd8(arg1 + eax - 1u) != 0x7fu) goto L_101c63aa;
        if (rd8(arg1 + ecx + 1u) == 0xffu) goto L_101c63b0;
L_101c63aa: ;
        if ((int32_t)(eax + 1u) < (int32_t)arg2)
        {
            eax = eax + 1u;
            ecx = ecx + 1u;
            goto L_101c639c;
        }
        ecx = ecx + 1u;
    }
L_101c63b0: ;
    if (ecx + 1u != arg2)
    {
        eax = ecx + 1u;
        goto L_101c63c7;
    }
    eax = ecx + 1u;
    g->edx = arg2;
    return 0xffffffffu;
L_101c63c7: ;
    wr32(sp0 - 0x424u, ecx);
    if ((int32_t)(eax + 1u) >= (int32_t)arg2)
    {
        ebp = ecx;
        loc_424 = ecx;
        goto L_101c63e8;
    }
    ebp = ecx;
    loc_424 = ecx;
    ecx = eax + 1u;
L_101c63d4: ;
    if (rd8(arg1 + ecx - 1u) != 0x7fu) goto L_101c63e2;
    if (rd8(arg1 + eax + 1u) == 0xffu) goto L_101c63e8;
L_101c63e2: ;
    if ((int32_t)(ecx + 1u) < (int32_t)arg2)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_101c63d4;
    }
    eax = eax + 1u;
L_101c63e8: ;
    if ((int32_t)(eax + 1u) >= (int32_t)arg2)
    {
        esi = 0u;
    }
    else
    {
        wr32(sp0 - 0x420u, eax);
        esi = 1u;
    }
    if ((int32_t)arg2 <= 1)
    {
        eax = 0u;
    }
    else
    {
        eax = 0u;
        ecx = 1u;
L_101c6404: ;
        if (rd8(arg1 + ecx - 1u) != 0x7fu) goto L_101c6412;
        if (rd8(arg1 + eax + 1u) == 0xfeu) goto L_101c6418;
L_101c6412: ;
        if ((int32_t)(ecx + 1u) < (int32_t)arg2)
        {
            eax = eax + 1u;
            ecx = ecx + 1u;
            goto L_101c6404;
        }
        eax = eax + 1u;
    }
L_101c6418: ;
    wr32(sp0 - 0x428u, eax);
    if ((int32_t)(eax + 1u) < (int32_t)arg2)
    {
        loc_428 = eax;
    }
    else
    {
        wr32(sp0 - 0x428u, ebp);
        loc_428 = ebp;
    }
    if ((int32_t)ebp < (int32_t)rd32(self + 0x6a4u))
    {
        wr32(self + 0x6a4u, 0u);
    }
    if ((int32_t)rd32(self + 0x6a4u) <= 0)
    {
        ecx = 0u;
        edx = rd32(self + 0x6a4u);
        goto L_101c646b;
    }
    ecx = 0u;
    edx = rd32(self + 0x6a4u);
L_101c6445: ;
    if (rd8(arg1 + ecx) < 0x80u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
        goto L_101c6450;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    if ((uint8_t)eax <= 0x9fu) goto L_101c6458;
L_101c6450: ;
    if ((uint8_t)eax < 0xe0u) goto L_101c645d;
    if ((uint8_t)eax > 0xffu) goto L_101c645d;
L_101c6458: ;
    ecx = ecx + 2u;
L_101c6467: ;
    if ((int32_t)ecx < (int32_t)edx) goto L_101c6445;
L_101c646b: ;
    if (ecx != edx)
    {
        wr32(self + 0x6a4u, edx - 1u);
    }
    t1 = rd32(esi * 4u + sp0 - 0x424u) - rd32(self + 0x6a4u);
    t2 = rd32(self + 0x6a4u);
    esi = arg1 + t2;
    edi = sp0 - 0x41cu;
    ecx = t1 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t1 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x43cu, sp0 - 0x41cu);
    wr8(sp0 + t1 - 0x41cu, 0x7fu);
    wr8(sp0 + t1 - 0x41bu, 0xffu);
    wr8(sp0 + t1 - 0x41au, 0u);
    g->edx = t1;
    g->esp = sp0 - 0x428u;
    t3 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x41cu, ecx, g->edx, 1, 5, sp0 - 0x41cu, in_edi, in_esi, in_ebp, in_ebx);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 <= (int32_t)arg5)
    {
        edi = 0u;
        goto L_101c6517;
    }
    ecx = t4;
    edx = t5;
    ebp = t3;
    esi = t1 + 2u;
    edi = 0u;
L_101c64cf: ;
    if ((int32_t)edi >= (int32_t)esi) goto L_101c6517;
    if (rd8(edi + sp0 - 0x41cu) < 0x80u)
    {
        eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x41cu);
        goto L_101c64df;
    }
    eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x41cu);
    if ((uint8_t)eax <= 0x9fu) goto L_101c64e7;
L_101c64df: ;
    if ((uint8_t)eax < 0xe0u) goto L_101c64f1;
    if ((uint8_t)eax > 0xffu) goto L_101c64f1;
L_101c64e7: ;
    eax = 0xeu;
    edi = edi + 2u;
L_101c650a: ;
    if ((int32_t)(ebp - eax) > (int32_t)arg5)
    {
        ebp = ebp - eax;
        goto L_101c64cf;
    }
L_101c6517: ;
    t10 = edi + rd32(self + 0x6a4u);
    t11 = rd32(sp0 - 0x424u);
    wr32(self + 0x6a4u, t10);
    if ((int32_t)t11 >= (int32_t)t10)
    {
        eax = rd32(sp0 - 0x428u);
    }
    else
    {
        eax = rd32(sp0 - 0x428u);
        edx = 0u;
L_101c6535: ;
        if ((int32_t)rd32(self + 0x6a4u) <= 0) goto L_101c6596;
        if ((int32_t)rd32(self + 0x6a4u) > 0)
        {
            ecx = 0u;
L_101c6552: ;
            if (rd8(arg1 + ecx) < 0x80u)
            {
                eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
                goto L_101c655d;
            }
            eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
            if ((uint8_t)eax <= 0x9fu) goto L_101c6565;
L_101c655d: ;
            if ((uint8_t)eax < 0xe0u) goto L_101c656f;
            if ((uint8_t)eax > 0xffu) goto L_101c656f;
L_101c6565: ;
            eax = 1u;
            ecx = ecx + 2u;
L_101c6572: ;
            if ((int32_t)ecx < (int32_t)rd32(self + 0x6a4u)) goto L_101c6552;
        }
        if (eax == 0u)
        {
            ecx = rd32(self + 0x6a4u);
            ecx = ecx - 1u;
        }
        else
        {
            ecx = rd32(self + 0x6a4u);
            ecx = ecx - 2u;
        }
        wr32(self + 0x6a4u, ecx);
        if ((int32_t)(edx + 1u) < 5)
        {
            edx = edx + 1u;
            goto L_101c6535;
        }
    }
L_101c6596: ;
    if ((int32_t)rd32(sp0 - 0x424u) < (int32_t)rd32(self + 0x6a4u))
    {
        ecx = rd32(self + 0x6a4u);
        edx = rd32(sp0 - 0x424u);
L_101c65b0: ;
        if ((int32_t)ecx <= 0) goto L_101c6601;
        if ((int32_t)rd32(self + 0x6a4u) <= 0) goto L_101c65e8;
        ecx = 0u;
L_101c65c0: ;
        if (rd8(arg1 + ecx) < 0x80u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
            goto L_101c65cb;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
        if ((uint8_t)eax <= 0x9fu) goto L_101c65d3;
L_101c65cb: ;
        if ((uint8_t)eax < 0xe0u) goto L_101c65dd;
        if ((uint8_t)eax > 0xffu) goto L_101c65dd;
L_101c65d3: ;
        eax = 1u;
        ecx = ecx + 2u;
L_101c65e0: ;
        if ((int32_t)ecx < (int32_t)rd32(self + 0x6a4u)) goto L_101c65c0;
L_101c65e8: ;
        if (eax == 0u)
        {
            ecx = rd32(self + 0x6a4u);
            ecx = ecx - 1u;
        }
        else
        {
            ecx = rd32(self + 0x6a4u);
            ecx = ecx - 2u;
        }
        wr32(self + 0x6a4u, ecx);
        if ((int32_t)edx < (int32_t)ecx) goto L_101c65b0;
    }
L_101c6601: ;
    t12 = arg2 - rd32(self + 0x6a4u);
    wr32(sp0 - 0x43cu, t12);
    t13 = arg1 + rd32(self + 0x6a4u);
    wr32(sp0 - 0x440u, t13);
    wr32(sp0 - 0x444u, sp0 - 0x41cu);
    g->ecx = t12;
    g->edx = sp0 - 0x41cu;
    g->esp = sp0 - 0x430u;
    t14 = cow_cdecl(g, COW_IMG(0x1018fe70u), 5, sp0 - 0x41cu, t13, t12, rd32(sp0 - 0x438u), rd32(sp0 - 0x434u));
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        ecx = t15;
        edx = t16;
        goto L_101c6637;
    }
    eax = t14;
    edx = t16;
    g->ebx = rd32(sp0 - 0x42cu);
    g->esi = rd32(sp0 - 0x434u);
    g->edi = rd32(sp0 - 0x438u);
    g->ebp = rd32(sp0 - 0x430u);
    g->edx = edx;
    return 0xffffffffu;
L_101c645d: ;
    if ((uint8_t)eax != 0x7fu)
    {
        ecx = ecx + 1u;
    }
    else
    {
        ecx = ecx + 2u;
    }
    goto L_101c6467;
L_101c64f1: ;
    if ((uint8_t)eax != 0x7fu)
    {
        t6 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
        wr32(sp0 - 0x43cu, t6);
        g->ecx = t6;
        g->edx = edx;
        g->esp = sp0 - 0x438u;
        t7 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
        edi = edi + 1u;
    }
    else
    {
        eax = 0u;
        edi = edi + 2u;
    }
    goto L_101c650a;
L_101c656f: ;
    eax = 0u;
    ecx = ecx + 1u;
    goto L_101c6572;
L_101c65dd: ;
    eax = 0u;
    ecx = ecx + 1u;
    goto L_101c65e0;
L_101c6637: ;
    wr32(sp0 - 0x43cu, sp0 - 0x41cu);
    t17 = rd32(self + 0x6a4u);
    wr8(arg2 + sp0 - t17 - 0x41cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t18 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x41cu, ecx, g->edx, 1, 5, sp0 - 0x41cu, rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t19 = g->ecx;
    t20 = g->edx;
    if ((int32_t)t18 <= (int32_t)arg5)
    {
        ecx = t19;
        ebp = arg2 - t17;
        goto L_101c667c;
    }
    eax = t18;
    edx = t20;
    ebp = arg2 - t17;
L_101c665c: ;
    wr32(sp0 - 0x43cu, ebp);
    wr32(sp0 - 0x440u, sp0 - 0x41cu);
    g->eax = eax;
    g->esp = sp0 - 0x438u;
    t21 = cow_thiscall(g, COW_IMG(0x101c6720u), self, 2, sp0 - 0x41cu, ebp);
    t22 = g->ecx;
    wr32(sp0 - 0x43cu, sp0 - 0x41cu);
    g->edx = sp0 - 0x41cu;
    g->esp = sp0 - 0x428u;
    t23 = cow_call_regs(g, COW_IMG(0x10190830u), t21, t22, g->edx, 1, 5, sp0 - 0x41cu, rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t24 = g->ecx;
    t25 = g->edx;
    if ((int32_t)t23 > (int32_t)arg5)
    {
        eax = t23;
        edx = t25;
        ebp = t21;
        goto L_101c665c;
    }
    ecx = t24;
    ebp = t21;
L_101c667c: ;
    if ((int32_t)rd32(self + 0x6a4u) < 0) goto L_101c66b4;
    eax = rd32(self + 0x6a4u);
L_101c668d: ;
    if (rd8(arg1 + eax) != 0x7fu) goto L_101c66a1;
    if ((int8_t)rd8(arg1 + eax + 1u) < 100)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
        goto L_101c66a1;
    }
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
    if ((int8_t)ecx < 120) goto L_101c66a6;
L_101c66a1: ;
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        goto L_101c668d;
    }
L_101c66b4: ;
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, 0x64u);
L_101c66bb: ;
    if ((int32_t)rd32(sp0 - 0x428u) >= (int32_t)rd32(self + 0x6a4u))
    {
        ecx = ebp;
        goto L_101c66f8;
    }
    ecx = ebp;
    wr8(arg3 + 2u, 0x7fu);
    wr8(arg3 + 3u, 0xfeu);
    esi = sp0 - 0x41cu;
    edi = arg3 + 4u;
    ecx = ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->ebx = rd32(sp0 - 0x42cu);
    g->esi = rd32(sp0 - 0x434u);
    g->edi = rd32(sp0 - 0x438u);
    g->ebp = rd32(sp0 - 0x430u);
    g->edx = ecx;
    return ebp + 4u;
L_101c66a6: ;
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, rd8(arg1 + eax + 1u));
    if ((int32_t)eax >= 0) goto L_101c66bb;
    goto L_101c66b4;
L_101c66f8: ;
    esi = sp0 - 0x41cu;
    edi = arg3 + 2u;
    ecx = ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t26 = rd32(sp0 - 0x438u);
    wr8(arg3 + ebp + 2u, 0u);
    g->ebx = rd32(sp0 - 0x42cu);
    g->esi = rd32(sp0 - 0x434u);
    g->edi = t26;
    g->ebp = rd32(sp0 - 0x430u);
    g->edx = arg3;
    return ebp + 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c6360(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
