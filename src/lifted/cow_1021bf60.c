/* f_0x1021bf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021bf60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 2916u);

    wr32(sp0 - 0xb44u, in_edi);
    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_1021c000;
    }
    if (rd8(arg1) == 0u)
    {
        eax = arg1;
        goto L_1021c000;
    }
    wr32(sp0 - 0xb48u, 1u);
    wr32(sp0 - 0xb4cu, 0u);
    wr32(sp0 - 0xb50u, 0u);
    wr32(sp0 - 0xb54u, 0xa20u);
    wr32(sp0 - 0xb58u, sp0 - 0xa20u);
    wr32(sp0 - 0xb5cu, arg1);
    wr32(sp0 - 0xb60u, 0xa200101u);
    g->edx = in_edx;
    g->esp = sp0 - 0xb44u;
    cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0xb40u, 7, 0xa200101u, arg1, sp0 - 0xa20u, 0xa20u, 0u, 0u, 1u);
    t1 = g->edx;
    wr32(sp0 - 0xb48u, 0u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101b9bc0u), sp0 - 0xb40u, 1, 0u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1021bff7;
    }
    edx = t3;
    wr32(sp0 - 0xb48u, in_esi);
    eax = self + 0x1368u;
    ecx = self + 0x80u;
    esi = sp0 - 0xa20u;
    edi = 0x51u;
L_1021bfc8: ;
    if (rd16(ecx) == 0u)
    {
        wr8(eax, 0u);
    }
    else
    {
        t4 = rd8(esi);
        wr8(eax, (uint8_t)t4);
        edx = (edx & 0xffffff00u) | t4;
    }
    if (edi != 1u)
    {
        eax = eax + 1u;
        ecx = ecx + 0x18u;
        esi = esi + 0x20u;
        edi = edi - 1u;
        goto L_1021bfc8;
    }
    eax = eax + 1u;
    g->eax = eax;
    g->esp = sp0 - 0xb48u;
    t5 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0xb40u, 0);
    g->edi = rd32(sp0 - 0xb44u);
    return (t5 & 0xffffff00u) | 1u;
L_1021bff7: ;
    g->eax = eax;
    g->esp = sp0 - 0xb44u;
    t6 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0xb40u, 0);
    eax = t6;
L_1021c000: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021bf60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
