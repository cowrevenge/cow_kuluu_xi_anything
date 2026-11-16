/* f_0x101cfeb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_101cfeb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x14u, t1);
    ecx = 0u;
    edx = t1;
    ebx = 0u;
    ebp = arg6;
    esi = arg1 * t1;
    edi = arg4;
L_101cfedc: ;
    if ((int32_t)edi < 0) goto L_101cff23;
    if ((int32_t)edx < 0) goto L_101cff23;
    if ((int32_t)edi >= (int32_t)arg1) goto L_101cff23;
    if ((int32_t)edx >= (int32_t)arg2) goto L_101cff23;
    if (!(ebx & 1u))
    {
        eax = rd32(arg3 + (uint32_t)((int32_t)(edi + esi - (uint32_t)((int32_t)(edi + esi) >> 0x1fu)) >> 1u) * 4u);
        loc_18 = ecx;
        g->esp = sp0 - 0x14u;
        t3 = cow_stdcall(g, COW_IMG(0x101cfe20u), 4, eax, ebp, 0u, loc_18);
        ecx = t3;
    }
    else
    {
        eax = rd32(arg3 + (uint32_t)((int32_t)(edi + esi - (uint32_t)((int32_t)(edi + esi) >> 0x1fu)) >> 1u) * 4u);
        loc_18 = ecx;
        g->esp = sp0 - 0x14u;
        t2 = cow_stdcall(g, COW_IMG(0x101cfe20u), 4, eax, 0u, ebp, loc_18);
        ecx = t2;
    }
L_101cff26: ;
    if ((int32_t)(edi + 1u) < (int32_t)(arg4 + 0x10u))
    {
        edi = edi + 1u;
    }
    else
    {
        t4 = rd32(sp0 + 0x14u) + 1u;
        wr32(sp0 + 0x14u, t4);
        esi = arg1 + esi;
        edi = arg4;
    }
    if ((int32_t)(ebx + 1u) < 256)
    {
        ebx = ebx + 1u;
        ebp = ebp + 4u;
        goto L_101cfed8;
    }
    return;
L_101cfed8: ;
    edx = rd32(sp0 + 0x14u);
    goto L_101cfedc;
L_101cff23: ;
    wr32(ebp, ecx);
    goto L_101cff26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cfeb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cfeb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
