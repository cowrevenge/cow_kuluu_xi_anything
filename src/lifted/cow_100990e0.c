/* f_0x100990e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100990e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = COW_IMG(0x104804e0u);
    ecx = arg3 + 4u;
L_100990ec: ;
    wr32(eax, rd32(ecx));
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x104805e0u))
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100990ec;
    }
    ecx = ecx + 4u;
    t1 = rd32(COW_IMG(0x104807ecu)) | 2u;
    t2 = rd32(COW_IMG(0x104807e4u));
    wr32(COW_IMG(0x104807ecu), t1);
    if (t2 == 0u)
    {
        edx = t1;
    }
    else
    {
        eax = t2;
        edx = t1;
        g->edx = edx;
        g->esp = sp0;
        cow_thiscall(g, eax, ecx, 0);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint16_t)t5 == 0u)
    {
        ecx = t6;
        edx = t7;
    }
    else
    {
        ecx = t6;
        edx = t7;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t8 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
        t9 = g->ecx;
        t10 = g->edx;
        if ((uint16_t)t8 == rd16(COW_IMG(0x10487eecu)))
        {
            ecx = t9;
            edx = t10;
        }
        else
        {
            eax = t8;
            ecx = t9;
            edx = t10;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x10087180u), 1, 1u);
            t11 = g->ecx;
            t12 = g->edx;
            ecx = t11;
            edx = t12;
        }
    }
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t14 = g->edx;
    wr16(COW_IMG(0x10487eecu), (uint16_t)t13);
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100990e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100990e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
