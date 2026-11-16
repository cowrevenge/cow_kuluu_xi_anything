/* f_0x1031652b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1031652b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0xcu);
    t2 = rd32(rd32(sp0 + 4u) + 0x10u);
    t3 = rd32(sp0 + 4u);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, t1);
    if ((int32_t)t4 < 0)
    {
        eax = t1;
        edx = in_edx;
        ebx = t2;
        esi = t1;
        edi = t3;
        goto L_10316582;
    }
    eax = t1;
    ecx = self;
    edx = in_edx;
    ebx = t2;
    esi = t1;
    edi = t3;
    loc_8 = t1;
L_10316549: ;
    if (esi == 0xffffffffu)
    {
        g->esp = sp0 - 0x14u;
        cow_fastcall(g, COW_IMG(0x10321895u), ecx, edx, 0);
        t5 = g->edx;
        edx = t5;
    }
    if ((int32_t)rd32(ebx + esi * 0x14u - 0x10u) >= (int32_t)arg3)
    {
        eax = ebx + esi * 0x14u - 0x14u;
        esi = esi - 1u;
        goto L_10316568;
    }
    eax = ebx + esi * 0x14u - 0x14u;
    esi = esi - 1u;
    if ((int32_t)arg3 <= (int32_t)rd32(eax + 8u)) goto L_1031656d;
L_10316568: ;
    if (esi != 0xffffffffu) goto L_10316579;
L_1031656d: ;
    t6 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
    wr32(sp0 + 4u, esi);
    eax = t6;
    loc_8 = t6;
L_10316579: ;
    if ((int32_t)rd32(sp0 + 8u) >= 0)
    {
        ecx = arg3;
        goto L_10316549;
    }
    eax = loc_8;
L_10316582: ;
    wr32(arg4, esi + 1u);
    wr32(arg5, eax);
    if (eax > rd32(edi + 0xcu))
    {
        esi = esi + 1u;
        goto L_10316596;
    }
    esi = esi + 1u;
    if (esi <= eax) goto L_1031659b;
L_10316596: ;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10321895u), arg5, edx, 0);
L_1031659b: ;
    return ebx + esi * 0x14u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031652b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031652b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
