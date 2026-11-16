/* f_0x101ca650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101ca650(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    wr32(sp0 + 0xcu, t2);
    if ((int32_t)(~ecx - 1u) <= 0) goto L_101ca69f;
    ebx = 0u;
    ebp = t1;
    esi = 0u;
L_101ca674: ;
    g->eax = arg4;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x101ca570u), ebp + esi, 3, arg2, ebp + esi, arg4);
    wr32(arg5, t3);
    if (ebx == arg1) goto L_101ca6ac;
    eax = t3;
    if ((int32_t)(eax + esi) < (int32_t)rd32(sp0 + 0xcu))
    {
        ebx = ebx + 1u;
        esi = eax + esi;
        goto L_101ca674;
    }
L_101ca69f: ;
    wr32(arg5, 0u);
    return 0u;
L_101ca6ac: ;
    return ebp + esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
