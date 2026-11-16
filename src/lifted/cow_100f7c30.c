/* f_0x100f7c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_100f7c30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 < -1) goto L_100f7c44;
    if ((int32_t)arg2 <= 7)
    {
        edx = (in_edx & 0xffffff00u) | 1u;
        goto L_100f7c46;
    }
L_100f7c44: ;
    edx = in_edx & 0xffffff00u;
L_100f7c46: ;
    if ((int32_t)arg3 < 0) goto L_100f7c53;
    if ((int32_t)arg3 <= 80) goto L_100f7c55;
L_100f7c53: ;
    edx = edx & 0xffffff00u;
L_100f7c55: ;
    if ((int32_t)arg4 <= 0)
    {
        edx = edx & 0xffffff00u;
    }
    if (arg5 == 0u)
    {
        edx = edx & 0xffffff00u;
    }
    edi = arg5;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)(~ecx - 1u) < 3) goto L_100f7c7f;
    ecx = ~ecx - 1u;
    if ((int32_t)ecx <= 15) goto L_100f7c86;
L_100f7c7f: ;
    return eax & 0xffffff00u;
L_100f7c86: ;
    if ((uint8_t)edx == 0u) goto L_100f7d05;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x100f7bc0u), 4, 2u, 2u, arg2, arg3);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100f7c7f;
    }
    ebx = t1;
    wr32(ebx + 0x10u, rd32(arg5));
    t2 = rd32(arg5 + 4u);
    wr32(ebx + 0x14u, t2);
    t3 = rd32(arg5 + 8u);
    wr32(ebx + 0x18u, t3);
    t4 = rd32(arg5 + 0xcu);
    wr32(ebx + 0x1cu, t4);
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd32(COW_IMG(0x103d023cu));
        edi = ebx + 0x10u;
        eax = rd8(rd8(edi) * 2u + rd32(COW_IMG(0x103d0030u))) & 2u;
        ecx = rd8(edi);
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        ecx = t3;
        edx = t4;
        edi = ebx + 0x10u;
        g->edx = edx;
        t5 = rd8(edi);
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, t5, 2u, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    if (eax != 0u)
    {
        t9 = rd8(edi);
        g->esp = sp0 - 0x10u;
        t10 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, edx, 1, 1, t9);
        wr8(edi, (uint8_t)t10);
        eax = t10;
    }
    wr32(ebx + 8u, arg4);
    return (eax & 0xffffff00u) | 1u;
L_100f7d05: ;
    return (eax & 0xffffff00u) | (uint8_t)edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
