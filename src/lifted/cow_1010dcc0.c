/* f_0x1010dcc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1010dcc0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x14u);
    ecx = t1;
    ebp = rd32(sp0 + 8u);
    loc_4 = t1;
L_1010dcd2: ;
    if (rd32(ecx + 4u) == 0u) goto L_1010dd8b;
    t2 = rd32(ecx + 8u);
    t3 = rd32(ecx + 8u);
    wr32(sp0 + 8u, t2);
    if (t3 == 0u) goto L_1010dd8b;
    eax = arg1;
    ebx = rd32(ecx);
    esi = 0u;
    edi = rd32(ecx) - arg1;
L_1010dcf8: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010dd8b;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010dd10;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010dcf8;
    }
L_1010dd10: ;
    eax = arg1;
    esi = 0u;
    edi = ebx - arg1;
L_1010dd1a: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010dd2e;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010dd7c;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010dd1a;
    }
L_1010dd2e: ;
    eax = ebp;
    esi = 0u;
    edi = ebx + 0xcu - ebp;
    ebx = ebx + 0xcu;
L_1010dd39: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010dd8b;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010dd4d;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010dd39;
    }
L_1010dd4d: ;
    eax = ebp;
    esi = 0u;
    edi = ebx - ebp;
L_1010dd55: ;
    if (rd32(eax + edi) > rd32(eax)) goto L_1010dd69;
    cf = rd32(eax + edi) < rd32(eax);
    if (cf) goto L_1010dd7c;
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010dd55;
    }
L_1010dd69: ;
    return rd32(loc_4) + 0x18u;
L_1010dd7c: ;
    t4 = rd32(sp0 + 8u);
    ecx = t4;
    loc_4 = t4;
    goto L_1010dcd2;
L_1010dd8b: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010dcc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010dcc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
