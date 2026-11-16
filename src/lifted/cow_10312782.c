/* f_0x10312782 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10312782(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10317480u), in_eax, g->ecx, g->edx, 1, 1, arg1);
    t2 = g->edx;
    if (t1 < 5u)
    {
        edx = t2;
        goto L_103127ee;
    }
    eax = t1;
    edx = t2;
    if (rd8(arg1) == 0x5cu)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1);
        goto L_1031279d;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1);
    if ((uint8_t)eax != 0x2fu) goto L_103127ee;
L_1031279d: ;
    if (rd8(arg1 + 1u) == 0x5cu) goto L_103127a8;
    eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
    if ((uint8_t)eax != 0x2fu) goto L_103127ee;
L_103127a8: ;
    eax = arg1 + 3u;
    ecx = (arg1 & 0xffffff00u) | rd8(arg1 + 3u);
    edx = edx & 0xffffff00u;
L_103127b0: ;
    if ((uint8_t)ecx == (uint8_t)edx) goto L_103127c4;
    if ((uint8_t)ecx == 0x5cu) goto L_103127c4;
    if ((uint8_t)ecx == 0x2fu) goto L_103127c4;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    eax = eax + 1u;
    goto L_103127b0;
L_103127c4: ;
    if (rd8(eax) == (uint8_t)edx) goto L_103127ee;
    if (rd8(eax + 1u) == (uint8_t)edx) goto L_103127ee;
    eax = eax + 1u;
L_103127cd: ;
    if (rd8(eax) == (uint8_t)edx) goto L_103127e0;
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0x5cu) goto L_103127e0;
    if ((uint8_t)ecx == 0x2fu) goto L_103127e0;
    eax = eax + 1u;
    goto L_103127cd;
L_103127e0: ;
    if (rd8(eax) == (uint8_t)edx) goto L_103127e9;
    if (rd8(eax + 1u) != (uint8_t)edx) goto L_103127ee;
L_103127e9: ;
    g->edx = edx;
    return 1u;
L_103127ee: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312782(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312782(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
