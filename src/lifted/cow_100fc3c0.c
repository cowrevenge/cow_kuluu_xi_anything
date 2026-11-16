/* f_0x100fc3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fc3c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        edx = in_edx;
        goto L_100fc4ac;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if ((int32_t)rd32(sp0 + 4u) >= 288)
    {
        edx = in_edx;
        goto L_100fc4ac;
    }
    esi = rd32(sp0 + 4u);
    if (arg2 != 0u)
    {
        ecx = self;
        goto L_100fc495;
    }
    if (rd32(eax + esi * 4u + 0x41b4u) == 0u)
    {
        ecx = rd32(eax + esi * 4u + 0x41b4u);
        edx = in_edx;
        goto L_100fc47e;
    }
    ecx = rd32(eax + esi * 4u + 0x41b4u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    if (t1 <= rd32(esi * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x43e34u) + rd32(esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x41b4u))
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = rd32(esi * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x43e34u) + rd32(esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x41b4u);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t3 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        eax = -(0x7fffffffu < rd32(esi * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x43e34u) + rd32(esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x41b4u) - t3) + 1u;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = rd32(esi * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x43e34u) + rd32(esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x41b4u) - t3;
    }
    else
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = rd32(esi * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x43e34u) + rd32(esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x41b4u);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t2 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        eax = 0x7fffffffu < t2 - rd32(esi * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x43e34u) - rd32(esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x41b4u);
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = 0x7fffffffu;
    }
    if (eax != 0u) goto L_100fc4ac;
L_100fc47e: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi * 4u + t5 + 0x41b4u, t4);
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = t5;
L_100fc495: ;
    g->eax = eax + 0x10u;
    g->ecx = ecx;
    g->edx = arg3;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x100dda60u), 4, eax + 0x10u, esi, arg2, arg3);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_100fc4b1;
    }
    edx = t8;
L_100fc4ac: ;
    g->edx = edx;
    return 0u;
L_100fc4b1: ;
    t9 = rd16(eax);
    wr16(eax, esi & 0x1ffu);
    t10 = (ecx & 0xffff0000u) | t9;
    wr32(sp0 + 4u, t10);
    wr16(eax + 2u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc3c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
