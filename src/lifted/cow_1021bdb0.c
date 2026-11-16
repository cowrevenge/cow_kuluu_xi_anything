/* f_0x1021bdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1021bdb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 2916u);

    wr32(sp0 - 0xb44u, in_esi);
    wr32(sp0 - 0xb48u, in_edi);
    edi = sp0 - 0xa20u;
    eax = 0u;
    ecx = 0x288u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = sp0 - 0xa20u;
    edx = in_edx;
L_1021bdd1: ;
    t1 = rd8(eax + self + 0x1368u);
    wr8(ecx, (uint8_t)t1);
    if ((int32_t)(eax + 1u) < 81)
    {
        eax = eax + 1u;
        ecx = ecx + 0x20u;
        edx = (edx & 0xffffff00u) | t1;
        goto L_1021bdd1;
    }
    edx = (edx & 0xffffff00u) | t1;
    if (arg1 == 0u) goto L_1021be38;
    if (rd8(arg1) == 0u) goto L_1021be38;
    wr32(sp0 - 0xb44u, in_ebx);
    wr32(sp0 - 0xb48u, 1u);
    wr32(sp0 - 0xb4cu, 0u);
    wr32(sp0 - 0xb50u, 0u);
    wr32(sp0 - 0xb54u, 0xa20u);
    wr32(sp0 - 0xb58u, sp0 - 0xa20u);
    wr32(sp0 - 0xb5cu, arg1);
    wr32(sp0 - 0xb60u, 0xa200101u);
    g->edx = edx;
    g->esp = sp0 - 0xb44u;
    cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0xb40u, 7, 0xa200101u, arg1, sp0 - 0xa20u, 0xa20u, 0u, 0u, 1u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101b9a10u), sp0 - 0xb40u, 0);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0xb40u, 0);
    return (t5 & 0xffffff00u) | (uint8_t)t3;
L_1021be38: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021bdb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
