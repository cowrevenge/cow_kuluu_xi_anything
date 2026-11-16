/* f_0x102b5970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_102b5970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    q1 = (int64_t)cow_muls(0x55555556u, arg2);
    t2 = rd32(arg1 + 0x34u);
    wr32(arg1 + 0x48u, arg2);
    t3 = cow_qhi(q1) + (cow_qhi(q1) >> 0x1fu);
    wr32(arg1 + 0x44u, t3);
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
        wr32(arg1 + 0x34u, t4);
    }
    wr32(rd32(arg1 + 0x34u) + 0x14u, arg3);
    t5 = rd32(arg1 + 0x34u);
    g->ecx = t5;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t5, 0u, arg4, 3u);
    t6 = g->ecx;
    t7 = rd32(arg1 + 0x34u);
    g->ecx = t6;
    g->edx = arg5;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t7, 1u, arg5, 3u);
    t8 = g->ecx;
    t9 = g->edx;
    if (arg6 != 0u)
    {
        ecx = t8;
        edx = t9;
        if ((int32_t)arg2 > 0)
        {
            if (rd32(arg1 + 0x4cu) == 0u)
            {
                eax = rd32(arg1 + 0x4cu);
            }
            else
            {
                eax = rd32(arg1 + 0x4cu);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t10 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103c1fb0u), 0x1b2u);
                t11 = g->ecx;
                t12 = g->edx;
                eax = t10;
                ecx = t11;
                edx = t12;
            }
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t13 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg2 << 2u, COW_IMG(0x103c1fb0u), 0x1b2u);
            wr32(arg1 + 0x4cu, t13);
            esi = arg6;
            edi = t13;
            ecx = arg2 << 2u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = 0u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        }
    }
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
        eax = rd32(eax + 0x54u);
    }
    g->eax = eax;
    g->ecx = arg3;
    g->edx = arg1 + 0x14u;
    g->esp = sp0 - 0xcu;
    t14 = cow_cdecl(g, COW_IMG(0x1028da40u), 3, arg1 + 0x14u, eax, arg3);
    t15 = g->ecx;
    t16 = g->edx;
    if (arg6 == 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x102b56d0u), 2, arg1, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b5970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b5970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
