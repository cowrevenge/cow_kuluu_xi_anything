/* f_0x1018cef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018cef0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x10u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u) goto L_1018cf36;
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x1018c610u), eax, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        edi = t3;
        loc_4 = t3;
    }
    else
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        edi = t3;
        loc_4 = t3;
        wr8(edi + 2u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t6 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x68u);
        t7 = g->edx;
        if (t6 == 0u)
        {
            edx = t7;
            esi = 0u;
        }
        else
        {
            eax = t6;
            edx = t7;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t8 = cow_thiscall(g, COW_IMG(0x1018d0d0u), eax, 0);
            t9 = g->edx;
            edx = t9;
            esi = t8;
        }
        wr32(edi + 0xcu, esi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall(g, COW_IMG(0x1018c980u), self, 1, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        if (t10 != 0u)
        {
            ecx = t11;
            edx = t12;
            if (rd16(rd32(self + 0xcu) + 0x1eu) == 1u)
            {
                eax = rd32(self + 0xcu);
                t13 = (uint32_t)(int16_t)rd16(eax + 0x1cu);
                g->esp = sp0 - 0x14u;
                cow_fastcall(g, COW_IMG(0x1018d130u), esi, t13, 1, t13);
                if ((int16_t)rd16(rd32(self + 0xcu) + 0x1cu) <= 0)
                {
                    eax = rd32(self + 0xcu);
                }
                else
                {
                    eax = rd32(self + 0xcu);
                    edx = 0u;
                    ebx = 0u;
L_1018cfdc: ;
                    if ((int32_t)edx >= (int16_t)rd16(eax + 0x64u))
                    {
                        eax = 0u;
                    }
                    else
                    {
                        eax = ebx + rd32(eax + 0x20u);
                    }
                    if ((int32_t)edx >= (int16_t)rd16(rd32(edi + 0xcu) + 0x64u))
                    {
                        edi = 0u;
                    }
                    else
                    {
                        ecx = rd32(edi + 0xcu);
                        edi = ebx + rd32(ecx + 0x20u);
                    }
                    esi = eax;
                    ecx = 0xdu;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    if ((int32_t)(edx + 1u) < (int16_t)rd16(rd32(self + 0xcu) + 0x1cu))
                    {
                        eax = rd32(self + 0xcu);
                        edx = edx + 1u;
                        ebx = ebx + 0x34u;
                        edi = loc_4;
                        goto L_1018cfdc;
                    }
                    eax = rd32(self + 0xcu);
                    edi = loc_4;
                }
                if (rd16(rd32(self + 0xcu) + 0x1cu) != 1u)
                {
                    eax = (eax & 0xffff0000u) | rd16(rd32(self + 0xcu) + 0x1cu);
                    ecx = rd32(self + 0xcu);
                    if (rd8((uint32_t)(int16_t)eax * 0x34u + rd32(ecx + 0x20u) - 0x24u) & 1u)
                    {
                        edx = (uint32_t)(int16_t)eax * 3u;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t14 = cow_thiscall(g, COW_IMG(0x1018c980u), self, 1, 0u);
                        t15 = g->edx;
                        g->edx = t15;
                        cow_thiscall(g, COW_IMG(0x10083300u), t14, 0);
                        t16 = g->edx;
                        t17 = rd8(edi + 2u);
                        wr8(edi + 2u, (uint8_t)(t17 | 2u));
                        g->edx = (t16 & 0xffffff00u) | t17 | 2u;
                        t18 = cow_thiscall(g, COW_IMG(0x1018c940u), self, 0);
                        t19 = g->edx;
                        if (t18 != 0u)
                        {
                            edx = t19;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t20 = cow_thiscall(g, COW_IMG(0x1018c940u), self, 0);
                            t21 = g->edx;
                            cow_thiscall(g, COW_IMG(0x10083300u), t20, 0);
                        }
                    }
                }
            }
            else
            {
                ecx = (ecx & 0xffff0000u) | rd16(rd32(self + 0xcu) + 0x1eu);
                g->esp = sp0 - 0x14u;
                cow_fastcall(g, COW_IMG(0x1018d130u), esi, edx, 1, (uint32_t)(int16_t)ecx);
                if ((int16_t)rd16(rd32(self + 0xcu) + 0x1eu) > 0)
                {
                    eax = rd32(self + 0xcu);
                    edx = 0u;
                    ebx = 0u;
L_1018cf7d: ;
                    if ((int32_t)edx >= (int16_t)rd16(eax + 0x64u))
                    {
                        eax = 0u;
                    }
                    else
                    {
                        eax = ebx + rd32(eax + 0x20u);
                    }
                    if ((int32_t)edx >= (int16_t)rd16(rd32(edi + 0xcu) + 0x64u))
                    {
                        edi = 0u;
                    }
                    else
                    {
                        ecx = rd32(edi + 0xcu);
                        edi = ebx + rd32(ecx + 0x20u);
                    }
                    esi = eax;
                    ecx = 0xdu;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    if ((int32_t)(edx + 1u) < (int16_t)rd16(rd32(self + 0xcu) + 0x1eu))
                    {
                        eax = rd32(self + 0xcu);
                        edx = edx + 1u;
                        ebx = ebx + 0x34u;
                        edi = loc_4;
                        goto L_1018cf7d;
                    }
                    edi = loc_4;
                }
            }
            t22 = rd32(rd32(self + 0xcu) + 4u);
            wr32(rd32(edi + 0xcu) + 4u, t22);
            t23 = rd32(rd32(self + 0xcu) + 8u);
            wr32(rd32(edi + 0xcu) + 8u, t23);
            t24 = rd32(rd32(self + 0xcu) + 0xcu);
            wr32(rd32(edi + 0xcu) + 0xcu, t24);
            t25 = rd32(rd32(self + 0xcu) + 0x18u);
            wr32(rd32(edi + 0xcu) + 0x18u, t25);
            t26 = rd16(rd32(self + 0xcu) + 0x1cu);
            wr16(rd32(edi + 0xcu) + 0x1cu, (uint16_t)t26);
            wr16(rd32(edi + 0xcu) + 0x1eu, rd16(rd32(self + 0xcu) + 0x1eu));
            t27 = rd32(rd32(self + 0xcu) + 0x10u);
            wr32(rd32(edi + 0xcu) + 0x10u, t27);
        }
    }
    return edi;
L_1018cf36: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018cef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018cef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
