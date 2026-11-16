/* f_0x102ada50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_102ada50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg1 + 0x4cu, arg7);
    t1 = rd32(arg1 + 0x34u);
    wr32(arg1 + 0x44u, arg5);
    if (t1 == 0u)
    {
        g->esp = sp0 - 0xcu;
        t2 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
        wr32(arg1 + 0x34u, t2);
    }
    t3 = rd32(arg1 + 0x34u);
    wr32(t3 + 0x14u, arg2);
    t4 = rd32(arg1 + 0x34u);
    g->eax = t4;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x102a9910u), 4, t4, 0u, arg3, 3u);
    t6 = rd32(arg1 + 0x34u);
    g->ecx = arg4;
    g->edx = t6;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t6, 2u, arg4, 2u);
    t7 = g->ecx;
    t8 = g->edx;
    if (arg6 == 0u)
    {
        edx = t8;
    }
    else
    {
        ecx = t7;
        edx = t8;
        if ((int32_t)arg5 > 0)
        {
            if (rd32(arg1 + 0x48u) != 0u)
            {
                eax = rd32(arg1 + 0x48u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bef68u), 0x212u);
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
            }
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg5 << 2u, COW_IMG(0x103bef68u), 0x212u);
            t12 = g->edx;
            wr32(arg1 + 0x48u, t11);
            esi = arg6;
            edi = t11;
            ecx = arg5 << 2u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = 0u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = t12;
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
    g->ecx = arg1 + 0x14u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x1028da40u), 3, arg1 + 0x14u, eax, arg2);
    t14 = g->ecx;
    t15 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102ad9b0u), 3, arg1, arg1 + 0x14u, eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ada50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ada50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
