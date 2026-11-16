/* f_0x1017ac40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1017ac40(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x101747f0u), 1, arg1);
    if (t1 != 0u)
    {
        eax = t1;
        edi = t1;
        goto L_1017ac61;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_1017ac61: ;
    if (rd32(edi + 0xd8u) != 0u)
    {
        edx = rd32(edi + 0xd8u);
        goto L_1017ac72;
    }
    return eax & 0xffffff00u;
L_1017ac72: ;
    wr8(edi + 0xf0u, (uint8_t)arg2);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10178780u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
    }
    else
    {
        edx = t3;
        if ((int32_t)rd32(edi + 0xd4u) <= 0)
        {
            eax = edx;
        }
        else
        {
            eax = edx;
            esi = 0u;
L_1017aca0: ;
            t4 = ((rd32(eax) ^ (arg2 == 0u) << 0xdu) & 0x2000u) ^ rd32(eax);
            wr32(eax, t4);
            if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0xd4u))
            {
                eax = eax + 0x1f0u;
                esi = esi + 1u;
                goto L_1017aca0;
            }
            eax = eax + 0x1f0u;
        }
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017ac40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017ac40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
