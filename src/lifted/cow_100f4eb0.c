/* f_0x100f4eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f4eb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 0xcu) == 0u) goto L_100f4f4d;
    edx = rd32(sp0 + 0xcu);
    if (rd8(edx) == 0u) goto L_100f4f4d;
    wr32(sp0 + 0xcu, 0u);
    eax = in_eax;
    ecx = 0u;
    ebx = in_ebx;
    ebp = 2u;
    edi = 1u;
L_100f4edd: ;
    if ((int32_t)edi >= (int32_t)arg2) goto L_100f4f42;
    if ((rd8(edx) & 0x80u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        ebx = (ebx & 0xffffff00u) | (rd8(edx) & 0x80u);
        goto L_100f4f0d;
    }
    eax = (eax & 0xffffff00u) | rd8(edx);
    ebx = (ebx & 0xffffff00u) | (rd8(edx) & 0x80u);
    if ((int32_t)ebp >= (int32_t)arg2) goto L_100f4f0d;
    wr8(arg1 + ecx, (uint8_t)eax);
    t1 = rd8(edx + 1u);
    wr8(arg1 + ecx + 1u, (uint8_t)t1);
    wr32(sp0 + 0xcu, 0u);
    eax = (eax & 0xffffff00u) | t1;
    ecx = ecx + 2u;
    edx = edx + 2u;
    ebp = ebp + 2u;
    edi = edi + 2u;
L_100f4f3d: ;
    if (rd8(edx) != 0u) goto L_100f4edd;
L_100f4f42: ;
    wr8(arg1 + ecx, 0u);
    return arg1;
L_100f4f0d: ;
    if ((uint8_t)ebx != 0u) goto L_100f4f26;
    if ((int8_t)eax <= 32) goto L_100f4f26;
    wr8(arg1 + ecx, (uint8_t)eax);
    wr32(sp0 + 0xcu, 0u);
    ecx = ecx + 1u;
    edx = edx + 1u;
    ebp = ebp + 1u;
    edi = edi + 1u;
    goto L_100f4f3d;
L_100f4f26: ;
    t2 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t2 + 1u);
    if (t2 != 0u)
    {
        eax = t2 + 1u;
        edx = edx + 1u;
        ebx = t2;
    }
    else
    {
        eax = t2 + 1u;
        edx = edx + 1u;
        ebx = t2;
        wr8(arg1 + ecx, 0x20u);
        ecx = ecx + 1u;
        ebp = ebp + 1u;
        edi = edi + 1u;
    }
    goto L_100f4f3d;
L_100f4f4d: ;
    wr8(arg1, 0u);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f4eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f4eb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
