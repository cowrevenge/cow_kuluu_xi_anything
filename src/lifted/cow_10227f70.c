/* f_0x10227f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10227f70(Guest* g)
{
    double d14;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q12;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t2 = g->edx;
    t3 = rd32(sp0 + 0x14u);
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x10227930u), arg1, 1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t1 * 0x3cu;
        edi = t4;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc3u);
        t8 = g->edx;
        if (t7 == 0u)
        {
            edx = t8;
            ebx = 0x80808080u;
        }
        else
        {
            if (rd32(arg1 + rd32(sp0 + 0x14u) * 4u + 0x2f0u) == 0x7fffffffu)
            {
                edx = rd32(arg1 + rd32(sp0 + 0x14u) * 4u + 0x2f0u);
                ebx = 0x80808080u;
            }
            else
            {
                edx = rd32(arg1 + rd32(sp0 + 0x14u) * 4u + 0x2f0u);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x10227100u), edi, 0);
                t10 = g->edx;
                if (t9 == 0xffu)
                {
                    edx = t10;
                    ebx = 0x80808080u;
                }
                else
                {
                    edx = t10;
                    t11 = edx - esi + 0x3bu;
                    q12 = (int64_t)cow_muls(0x88888889u, t11);
                    t13 = (uint32_t)((int32_t)(t11 + cow_qhi(q12)) >> 5u);
                    if ((int32_t)(t13 + (t13 >> 0x1fu)) > 15)
                    {
                        edx = t13 + (t13 >> 0x1fu);
                        ebx = 0x80808080u;
                    }
                    else
                    {
                        eax = t13 >> 0x1fu;
                        ecx = t11;
                        edx = t13 + (t13 >> 0x1fu);
                        g->edx = edx;
                        d14 = fr(g, (double)rdf32(arg1 + 0x288u) * (double)rdf32(COW_IMG(0x1033c280u)));
                        fpush(g, d14);
                        g->esp = sp0 - 0x10u;
                        t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t16 = g->edx;
                        edx = t16;
                        ebx = ((0x40u - t15 | 0xffff8000u) << 8u | 0x40u - t15) << 8u | 0x40u - t15;
                    }
                }
            }
        }
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t17 = cow_thiscall(g, COW_IMG(0x102270f0u), edi, 0);
        t18 = g->edx;
        wr8(arg1 + rd32(sp0 + 0x14u) + 0x2d0u, (uint8_t)t17);
        t19 = cow_thiscall(g, COW_IMG(0x10227130u), edi, 0);
        t20 = rd32(COW_IMG(0x106671b8u));
        wr32(sp0 + 0x14u, 0x3fc00000u);
        if (t20 == 0u)
        {
            edx = t19;
        }
        else
        {
            eax = t19;
            ecx = t20;
            edx = t19;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t21 = cow_call_regs(g, COW_IMG(0x10227920u), eax, ecx, g->edx, 1, 0);
            t22 = g->edx;
            if ((uint8_t)t21 != 1u)
            {
                edx = t22;
            }
            else
            {
                edx = t22;
                wr32(sp0 + 0x14u, 0x3f400000u);
            }
        }
        t23 = rd32(sp0 + 0x14u);
        g->eax = arg3 + 1u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t24 = cow_thiscall(g, COW_IMG(0x10026ad0u), edx, 5, arg3 + 1u, arg4 + 1u, t23, ebx, 0u);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10227f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
