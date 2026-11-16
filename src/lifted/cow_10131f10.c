/* f_0x10131f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10131f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(self + 0x1au) == 0u) goto L_10131f53;
    eax = self + 0x22u;
    ecx = self;
    esi = self + 0x34u;
L_10131f30: ;
    if (rd8(eax) == 0u) goto L_10131f3e;
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx != (uint8_t)arg1) goto L_10131f3e;
    if (rd32(esi) == arg2) goto L_10131f88;
L_10131f3e: ;
    if ((int32_t)(eax - self - 0x21u) < 16)
    {
        ecx = eax - self - 0x21u;
        eax = eax + 1u;
        esi = esi + 4u;
        goto L_10131f30;
    }
    eax = eax + 1u;
L_10131f4a: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10131f53: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x100e5290u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = 0u;
L_10131f62: ;
    if (eax == 0u) goto L_10131f4a;
    if (rd8(eax + 4u) != (uint8_t)arg1) goto L_10131f74;
    if (rd8(eax + 5u) == arg2) goto L_10131f88;
    edx = rd8(eax + 5u);
L_10131f74: ;
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x100e52c0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)(esi + 1u) < 16)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = esi + 1u;
        goto L_10131f62;
    }
    eax = t4;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10131f88: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131f10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
