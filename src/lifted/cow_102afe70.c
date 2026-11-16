/* f_0x102afe70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102afe70(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((uint32_t)(int8_t)rd8(arg1) == 0x2du)
    {
        eax = (uint32_t)(int8_t)rd8(arg1) - 0x2du;
        ecx = ~ecx - 1u;
        goto L_102afeb0;
    }
    eax = (uint32_t)(int8_t)rd8(arg1) - 0x2du;
    ecx = ~ecx - 1u;
    if (eax == 1u) goto L_102afe97;
    eax = eax - 1u;
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_102afeb0;
    }
    eax = eax - 2u;
L_102afe92: ;
    return eax & 0xffffff00u;
L_102afe97: ;
    if ((int32_t)ecx <= 1)
    {
        eax = 1u;
        goto L_102afec9;
    }
    eax = 1u;
L_102afea0: ;
    if (rd8(arg1 + eax) != 0x30u) goto L_102afe92;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_102afea0;
    }
    eax = eax + 1u;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_102afeb0: ;
    if ((int32_t)ecx <= 1) goto L_102afec9;
    edx = 1u;
L_102afeb9: ;
    if (rd8(arg1 + edx) == 0x30u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + edx);
        goto L_102afec4;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + edx);
    if ((uint8_t)eax != 0x2eu) goto L_102afe92;
L_102afec4: ;
    if ((int32_t)(edx + 1u) < (int32_t)ecx)
    {
        edx = edx + 1u;
        goto L_102afeb9;
    }
L_102afec9: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102afe70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102afe70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
