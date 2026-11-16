/* f_0x102ac050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_102ac050(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg1 + 0x34u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
        t2 = g->edx;
        wr32(arg1 + 0x34u, t1);
        edx = t2;
    }
    t3 = rd32(arg1 + 0x34u);
    wr32(t3 + 0x14u, arg2);
    g->eax = arg2;
    g->ecx = arg3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102a9910u), 4, t3, 0u, arg3, 3u);
    t5 = g->ecx;
    g->ecx = t5;
    g->edx = arg4;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t3, 1u, arg4, 3u);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t3, 2u, arg5, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(arg1 + 0x4cu, arg6);
    if (arg7 == 0u)
    {
        ebp = t3;
    }
    else
    {
        ecx = t8;
        edx = t9;
        ebp = t3;
        if ((int32_t)arg6 > 0)
        {
            if (rd32(arg1 + 0x48u) != 0u)
            {
                eax = rd32(arg1 + 0x48u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be980u), 0x475u);
                t10 = g->ecx;
                t11 = g->edx;
                ecx = t10;
                edx = t11;
            }
            g->esp = sp0 - 0x10u;
            t12 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg6 << 2u, COW_IMG(0x103be980u), 0x475u);
            wr32(arg1 + 0x48u, t12);
            esi = arg7;
            edi = t12;
            ecx = arg6 << 2u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = 0u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        }
    }
    t13 = rd32(ebp + 0x54u);
    g->eax = t13;
    g->ecx = arg2;
    g->edx = arg1 + 0x14u;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x1028da40u), 3, arg1 + 0x14u, t13, arg2);
    t15 = g->ecx;
    t16 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102abee0u), g->eax, g->ecx, t16, 1, 3, arg1, COW_IMG(0x102ac040u), ebp);
    wr32(arg1 + 0x44u, rd32(COW_IMG(0x109aaac0u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ac050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ac050(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
