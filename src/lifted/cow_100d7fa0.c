/* f_0x100d7fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100d7fa0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1048b6b4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1048b6b4u));
        goto L_100d7fac;
    }
    eax = rd32(COW_IMG(0x1048b6b4u));
    return eax & 0xffffff00u;
L_100d7fac: ;
    if ((int32_t)rd32(eax + 0x12ccu) <= 0)
    {
        wr32(eax + 0x12ccu, 1u);
        eax = rd32(COW_IMG(0x1048b6b4u));
    }
    if ((int32_t)rd32(eax + 0x12c8u) <= 0)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(eax + 0x12c8u);
        edx = in_edx;
        esi = 0x960u;
        edi = 0u;
L_100d7fd8: ;
        d1 = (double)(float)(double)(int32_t)rd32(eax + esi + 0x48u);
        d2 = (double)(float)(double)(int32_t)rd32(eax + esi + 0x44u);
        t3 = eax + esi + 4u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10038720u), t3, g->ecx, g->edx, 1, 4, t3, cow_f2bits(d2), cow_f2bits(d1), 0x40800000u);
        t4 = g->ecx;
        t5 = g->edx;
        if ((int32_t)(edi + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1048b6b4u)) + 0x12c8u))
        {
            eax = rd32(COW_IMG(0x1048b6b4u));
            ecx = t4;
            edx = t5;
            esi = esi + 0x50u;
            edi = edi + 1u;
            goto L_100d7fd8;
        }
        eax = rd32(COW_IMG(0x1048b6b4u));
        edx = t5;
    }
    wr32(eax + 0x12c8u, 0u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d7fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d7fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
