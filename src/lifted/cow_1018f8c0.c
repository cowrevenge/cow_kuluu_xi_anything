/* f_0x1018f8c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018f8c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        ebx = 0u;
        goto L_1018f915;
    }
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    esi = 0u;
L_1018f8d0: ;
    if (rd8(arg1 + esi) < 0x80u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + esi);
        goto L_1018f8db;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + esi);
    if ((uint8_t)eax <= 0x9fu) goto L_1018f8e7;
L_1018f8db: ;
    if ((uint8_t)eax < 0xe0u) goto L_1018f8e3;
    if ((uint8_t)eax <= 0xffu) goto L_1018f8e7;
L_1018f8e3: ;
    if ((uint8_t)eax != 0x7fu) goto L_1018f8fb;
L_1018f8e7: ;
    if ((uint8_t)eax != 0x7fu)
    {
        ebx = ebx + 0xeu;
    }
    if (rd8(arg1 + esi + 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + esi + 1u);
        goto L_1018f90e;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + esi + 1u);
    esi = esi + 2u;
L_1018f90f: ;
    if (rd8(arg1 + esi) != 0u) goto L_1018f8d0;
L_1018f915: ;
    return ebx;
L_1018f8fb: ;
    if ((uint8_t)eax != 6u)
    {
        t1 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
        ebx = ebx + t2;
    }
L_1018f90e: ;
    esi = esi + 1u;
    goto L_1018f90f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f8c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018f8c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
