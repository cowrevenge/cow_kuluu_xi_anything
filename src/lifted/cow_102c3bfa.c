/* f_0x102c3bfa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_102c3bfa(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_102c3c0a;
    if (arg2 == arg1) goto L_102c3c40;
L_102c3c0a: ;
    if ((int32_t)rd32(arg1 + 0x220u) <= 0) goto L_102c3c40;
    eax = rd32(arg1 + 0x220u);
    ecx = rd32(arg1 + 0x224u);
    edx = eax * 5u;
    esi = eax * 5u + rd32(arg1 + 0x224u) - 5u;
    edi = eax;
L_102c3c3c: ;
    if (edi != 0u) goto L_102c3c25;
L_102c3c40: ;
    eax = 0u;
L_102c3c42: ;
    return eax;
L_102c3c25: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), ecx, 3, arg2, esi, 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_102c3c45;
    ecx = t2;
    edx = t3;
    esi = esi - 5u;
    edi = edi - 1u;
    goto L_102c3c3c;
L_102c3c45: ;
    eax = rd8(esi + 4u);
    goto L_102c3c42;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3bfa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c3bfa(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
