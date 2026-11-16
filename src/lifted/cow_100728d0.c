/* f_0x100728d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_100728d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u) & arg3;
    t2 = rd8(self + 0x24u);
    wr32(sp0 + 8u, t1);
    t3 = ((uint8_t)((t2 & 0x7fu) - 1u) != 0u) - 1u;
    edx = t1;
    esi = self;
    loc_4 = t3;
L_10072909: ;
    if ((rd32(esi + 0x24u) & 0x7fu) != 1u)
    {
        eax = rd32(esi + 0x24u) & 0x7fu;
    }
    else
    {
        eax = rd32(esi + 0x24u) & 0x7fu;
        loc_4 = loc_4 + 1u;
    }
    if (eax != 0u) goto L_10072927;
    if ((int32_t)(loc_4 - 1u) < 0)
    {
        loc_4 = loc_4 - 1u;
        goto L_10072968;
    }
    loc_4 = loc_4 - 1u;
L_10072927: ;
    if (arg1 != 0u) goto L_10072938;
    ecx = rd32(esi + 0x20u) & arg3;
    zf = (rd32(esi + 0x20u) & arg3) == edx;
L_10072947: ;
    if (!zf) goto L_10072957;
L_10072949: ;
    t4 = rd32(esi + 0x14u);
    g->eax = t4;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall_cdecl(g, arg4, ecx, 2, t4, arg5);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_10072968;
    }
    eax = t5;
    edx = t6;
L_10072957: ;
    if (rd32(esi + 8u) == 0u)
    {
        esi = 0u;
    }
    else
    {
        esi = rd32(esi + 8u);
        esi = rd32(esi);
    }
    if (esi != 0u) goto L_10072901;
L_10072968: ;
    g->edx = edx;
    return eax;
L_10072901: ;
    edx = rd32(sp0 + 8u);
    goto L_10072909;
L_10072938: ;
    if (eax != arg1) goto L_10072957;
    if (edx == 0u)
    {
        ecx = arg1;
        goto L_10072949;
    }
    eax = rd32(esi + 0x20u) & arg3;
    ecx = arg1;
    zf = (rd32(esi + 0x20u) & arg3) == edx;
    goto L_10072947;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100728d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100728d0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
