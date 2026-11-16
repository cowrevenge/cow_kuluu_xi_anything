/* f_0x101c8ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101c8ef0(Guest* g)
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
    if ((int32_t)(~ecx - 1u) <= 1) goto L_101c8f20;
    ecx = ~ecx - 1u;
    edx = 1u;
L_101c8f0b: ;
    if ((int8_t)rd8(arg1 + edx) < 65)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + edx);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + edx);
        if ((int8_t)eax <= 90)
        {
            wr8(arg1 + edx, (uint8_t)((uint8_t)eax + 0x20u));
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x20u);
        }
    }
    if ((int32_t)(edx + 1u) < (int32_t)ecx)
    {
        edx = edx + 1u;
        goto L_101c8f0b;
    }
L_101c8f20: ;
    if ((int8_t)rd8(arg1) >= 97)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1);
        if ((int8_t)eax <= 122)
        {
            wr8(arg1, (uint8_t)((uint8_t)eax - 0x20u));
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c8ef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
