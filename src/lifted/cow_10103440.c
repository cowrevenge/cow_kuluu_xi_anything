/* f_0x10103440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10103440(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x104e0af4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104e0af4u));
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10103455;
    }
    eax = rd32(COW_IMG(0x104e0af4u));
    return eax & 0xffffff00u;
L_10103455: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x100dbeb0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 1u)
    {
        eax = t4;
        goto L_101034a2;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_stdcall(g, COW_IMG(0x100dbca0u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        goto L_101034a2;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_stdcall(g, COW_IMG(0x100dc2c0u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 1u)
    {
        eax = t10;
        goto L_101034a2;
    }
    ecx = t11;
    edx = t12;
    if (rd32(rd32(COW_IMG(0x104e0af0u)) + 0x158u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x158u);
        goto L_101034a6;
    }
    eax = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x158u);
    if (eax <= esi)
    {
        eax = -(0x7fffffffu < esi - eax) + 1u;
        edx = 0x7fffffffu;
    }
    else
    {
        eax = 0x7fffffffu < eax - esi;
        ecx = 0x7fffffffu;
    }
    if (eax == 0u) goto L_101034a6;
L_101034a2: ;
    return eax & 0xffffff00u;
L_101034a6: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100f02b0u), g->eax, g->ecx, edx, 1, 0);
    t13 = rd32(rd32(COW_IMG(0x104e0af0u))) + 1u;
    wr32(rd32(COW_IMG(0x104e0af0u)), t13);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0xacu, 0u);
    t14 = rd32(rd32(COW_IMG(0x104e0af4u)) + 0x444u) + 1u;
    t15 = rd32(COW_IMG(0x104e0af4u));
    wr32(t15 + 0x444u, t14);
    return (t15 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
