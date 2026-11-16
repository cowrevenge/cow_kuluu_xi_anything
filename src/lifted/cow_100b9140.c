/* f_0x100b9140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (self & 0xffff0000u) | rd16(self + 0x256u);
    t2 = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t1;
        edx = rd32(self + 0x20u);
        goto L_100b91ca;
    }
    eax = t2;
    ecx = t1;
    edx = rd32(self + 0x20u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100b91ad;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_100b9207;
    eax = eax - 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x1bu, 0u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u) goto L_100b9207;
    eax = t3;
    ecx = t4;
    edx = t5;
    wr16(eax + 4u, 2u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x1cu, 0u);
    wr8(COW_IMG(0x1048557au), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b91ad: ;
    t7 = rd8(COW_IMG(0x1048557au));
    wr8(self + 0x25au, 1u);
    if ((uint8_t)t7 != 0u) goto L_100b920e;
    wr16(self + 0x256u, (uint16_t)(ecx + 2u));
    return;
L_100b91ca: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x1bu, 0u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u) goto L_100b9207;
    eax = t8;
    ecx = t9;
    edx = t10;
    wr16(eax + 4u, 0u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x1cu, 0u);
    wr8(COW_IMG(0x1048557au), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, 1u);
    return;
L_100b9207: ;
    wr8(self + 0x25au, 1u);
L_100b920e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
