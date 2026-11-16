/* f_0x10017b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10017b00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_10017b17;
    }
    eax = rd32(self + 0x14u);
    if (eax == 1u) goto L_10017b1f;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        esi = in_esi;
        goto L_10017b86;
    }
    eax = eax - 1u;
L_10017b17: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10017b1f: ;
    if (rd32(COW_IMG(0x103507dcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x103507dcu));
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0x14u, in_esi);
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        esi = COW_IMG(0x103507dcu);
L_10017b2e: ;
        t1 = rd32(esi + 4u);
        wr32(sp0 - 0x18u, t1);
        wr32(sp0 - 0x1cu, COW_IMG(0x10350958u));
        wr32(sp0 - 0x20u, 5u);
        wr32(sp0 - 0x24u, sp0 - 8u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 8u, 5u, COW_IMG(0x10350958u), t1, in_esi, in_edi);
        t2 = g->edx;
        if (rd32(esi - 4u) == 0u) goto L_10017b63;
        eax = rd32(esi - 4u);
        edx = t2;
        if (eax != 1u) goto L_10017b7b;
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x1cu, rd32(esi));
        t3 = rd32(esi);
        g->esp = sp0 - 0x14u;
        t4 = cow_fastcall(g, COW_IMG(0x10019030u), self + 0xcu, sp0 - 8u, 2, t3, sp0 - 8u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
L_10017b75: ;
        if ((uint8_t)eax == 0u)
        {
            ebx = ebx & 0xffffff00u;
        }
L_10017b7b: ;
        if (rd32(esi + 0xcu) != 0u)
        {
            esi = esi + 0xcu;
            goto L_10017b2e;
        }
        eax = rd32(esi + 0xcu);
        esi = rd32(sp0 - 0x14u);
    }
L_10017b86: ;
    g->ebx = in_ebx;
    g->esi = esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_10017b63: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, rd32(rd32(esi)));
    g->edx = rd32(esi);
    t6 = rd32(rd32(esi));
    t7 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x10019000u), self + 0xcu, 2, t6, sp0 - 8u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    goto L_10017b75;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10017b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10017b00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
