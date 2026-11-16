/* f_0x1031803c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1031803c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        eax = arg1;
        ecx = (self & 0xffffff00u) | rd8(arg1);
        edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x103d0240u));
        goto L_10318058;
    }
    eax = arg1;
    ecx = (self & 0xffffff00u) | rd8(arg1);
    edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x103d0240u));
L_1031804c: ;
    if ((uint8_t)ecx == (uint8_t)edx) goto L_10318058;
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_1031804c;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    eax = eax + 1u;
L_10318058: ;
    if (rd8(eax) == 0u)
    {
        eax = eax + 1u;
        goto L_10318089;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    eax = eax + 1u;
L_1031805f: ;
    if (rd8(eax) == 0u) goto L_10318072;
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0x65u) goto L_10318072;
    if ((uint8_t)ecx == 0x45u) goto L_10318072;
    eax = eax + 1u;
    goto L_1031805f;
L_10318072: ;
    ecx = eax;
L_10318074: ;
    if (rd8(eax - 1u) == 0x30u)
    {
        eax = eax - 1u;
        goto L_10318074;
    }
    eax = eax - 1u;
    if (rd8(eax) == (uint8_t)edx)
    {
        eax = eax - 1u;
    }
L_1031807f: ;
    t1 = rd8(ecx);
    wr8(eax + 1u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t1;
        goto L_1031807f;
    }
    eax = eax + 1u;
    edx = (edx & 0xffffff00u) | t1;
L_10318089: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031803c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031803c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
