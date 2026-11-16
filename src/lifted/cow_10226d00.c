/* f_0x10226d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10226d00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x10226ce0u), self, in_edx, 1, arg1);
    t2 = g->edx;
    t3 = cow_fastcall(g, COW_IMG(0x10226ce0u), self, t2, 1, arg2);
    t4 = g->edx;
    if (t1 == 0xffffffffu)
    {
        eax = t3;
        goto L_10226d74;
    }
    eax = t3;
    edx = t4;
    ebp = t1;
    if (eax == 0xffffffffu) goto L_10226d74;
    if (ebp == eax) goto L_10226d74;
    zf = ebp == eax;
    sf = (int32_t)(ebp - eax) < 0;
    of = ((ebp ^ eax) & (ebp ^ ebp - eax)) >> 0x1fu;
    if (zf || sf != of) goto L_10226d52;
    if ((int32_t)eax >= (int32_t)ebp) goto L_10226d64;
    esi = eax * 2u + self + 2u;
    edi = eax * 2u + self;
    ecx = ebp - eax;
    while (ecx) { wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u); ecx--; }
    wr16(ebp * 2u + self, (uint16_t)arg2);
    return (((eax & 0xffff0000u) | (uint16_t)arg2) & 0xffffff00u) | 1u;
L_10226d52: ;
    if ((int32_t)eax <= (int32_t)ebp) goto L_10226d64;
L_10226d56: ;
    t5 = rd16(eax * 2u + self - 2u);
    wr16(eax * 2u + self, (uint16_t)t5);
    if ((int32_t)(eax - 1u) > (int32_t)ebp)
    {
        eax = eax - 1u;
        edx = (edx & 0xffff0000u) | t5;
        goto L_10226d56;
    }
    eax = eax - 1u;
L_10226d64: ;
    wr16(ebp * 2u + self, (uint16_t)arg2);
    return (((eax & 0xffff0000u) | (uint16_t)arg2) & 0xffffff00u) | 1u;
L_10226d74: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10226d00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
