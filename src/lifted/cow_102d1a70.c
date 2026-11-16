/* f_0x102d1a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d1a70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    ebx = arg1 + arg2 * 0x18u + 0x528u;
    edi = 0u;
L_102d1a8e: ;
    eax = ebx;
    esi = rd32(arg1 + 0x124u);
L_102d1a96: ;
    if (rd32(eax + esi * 4u) != 0u)
    {
        t1 = rd32(eax + 0x10u) + 1u;
        wr32(eax + 0x10u, t1);
        if ((int32_t)rd32(arg1 + 0x124u) <= 0) goto L_102d1ac1;
        ecx = 0u;
L_102d1aaf: ;
        t2 = rd32(eax + ecx * 4u + 4u);
        wr32(eax + ecx * 4u, t2);
        if ((int32_t)(ecx + 1u) < (int32_t)rd32(arg1 + 0x124u))
        {
            ecx = ecx + 1u;
            goto L_102d1aaf;
        }
    }
L_102d1ac1: ;
    if (rd32(eax + rd32(arg1 + 0x124u) * 4u - 4u) == 0u)
    {
        esi = rd32(arg1 + 0x124u);
    }
    else
    {
        esi = rd32(arg1 + 0x124u);
        if (rd32(eax) != 0u) goto L_102d1adf;
        if ((rd32(eax + 0x10u) & 0x3fu) != 0x3fu) goto L_102d1ae4;
L_102d1adf: ;
        edi = 1u;
    }
L_102d1ae4: ;
    if (eax - 0x18u >= arg1 + 0x540u)
    {
        eax = eax - 0x18u;
        goto L_102d1a96;
    }
    t3 = rd32(arg1 + 0x124u) - 1u;
    wr32(arg1 + 0x124u, t3);
    if (edi == 0u) goto L_102d1a8e;
    ecx = t3;
    return 3u - ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d1a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d1a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
