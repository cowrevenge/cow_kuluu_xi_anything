/* f_0x101fd980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101fd980(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self + 0x54u, 0u);
    eax = self + 0x5cu;
    ecx = 0xcu;
L_101fd992: ;
    wr32(eax, 0xffffu);
    if (ecx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx - 1u;
        goto L_101fd992;
    }
    t1 = rd16(self + 0x18u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t1);
    if (t2 == 0u)
    {
        eax = t2;
        goto L_101fd9e9;
    }
    eax = t2;
    if (rd32(eax + 0x1530u) == 0u) goto L_101fd9e9;
    edx = rd32(eax + 0x1530u);
    eax = 0u;
    ecx = 0x18u;
L_101fd9c7: ;
    if ((int8_t)rd8(eax + edx) < -1)
    {
        cf = rd8(eax + edx) < 0xffu;
        pf = PARITY((uint8_t)(rd8(eax + edx) - 0xffu));
        zf = (uint8_t)(rd8(eax + edx) - 0xffu) == 0u;
        sf = (int8_t)(rd8(eax + edx) - 0xffu) < 0;
        of = ((rd8(eax + edx) ^ 0xffu) & (rd8(eax + edx) ^ (uint8_t)(rd8(eax + edx) - 0xffu))) >> 7u;
        t3 = rd32(self + 0x54u) | 1u << (ecx & 0x1fu);
        wr32(self + 0x54u, t3);
    }
    if ((int32_t)(ecx - 1u) > -1)
    {
        eax = eax + 1u;
        ecx = ecx - 1u;
        goto L_101fd9c7;
    }
    eax = eax + 1u;
    return (eax & 0xffffff00u) | 1u;
L_101fd9e9: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fd980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fd980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
