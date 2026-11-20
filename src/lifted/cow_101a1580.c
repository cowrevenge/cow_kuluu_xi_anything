/* f_0x101a1580 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   copies a NUL-terminated string into a fixed-size slot of the object, truncating to 0x96 bytes when necessary, and records the stored length.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101a1580(Guest* g, uint32_t self, uint32_t str, uint32_t param3)
{
    const uint32_t orig_ebx = g->ebx;
    const uint32_t orig_esi = g->esi;
    const uint32_t orig_edi = g->edi;
    const uint32_t orig_ebp = g->ebp;

    if (str == 0u)
    {
        g->ebx = orig_ebx;
        g->esi = orig_esi;
        g->edi = orig_edi;
        g->ebp = orig_ebp;
        return 1u;
    }

    /*
       repne scasb al, byte ptr es:[edi]
       with al = 0, ecx = 0xffffffff, edi = str.

       The byte is read, then ecx and edi are updated; when the NUL is found,
       edi has already advanced past it.
    */
    uint32_t ecx = 0xFFFFFFFFu;
    uint32_t edi = str;

    while (ecx != 0u)
    {
        uint32_t b = rd8(edi);
        ecx = ecx - 1u;
        edi = edi + 1u;
        if (b == 0u)
        {
            break;
        }
    }

    /* not ecx; dec ecx */
    const uint32_t len = ~ecx - 1u;

    /* mov eax, dword ptr [ebp + 0x618] */
    uint32_t idx = rd32(self + 0x618u);

    /* cmp eax, 0x96 ; jg 0x101a15ff */
    if ((int32_t)param3 > 0x96)
    {
        /*
           lea ecx, [eax + eax*2]
           lea ecx, [ecx + ecx*4]
           lea ecx, [ecx + ecx*4]
           => ecx = idx * 75
        */
        uint32_t ecx_tmp = idx + idx * 2u;
        ecx_tmp = ecx_tmp + ecx_tmp * 4u;
        ecx_tmp = ecx_tmp + ecx_tmp * 4u;

        /* lea edx, [eax + ebp] */
        uint32_t edx_tmp = idx + self;

        /* lea eax, [edx + ecx*2 + 4] */
        uint32_t dest = edx_tmp + ecx_tmp * 2u + 4u;

        /*
           Preserve the register state seen by the callee at the original call site.
           The callee is cdecl, but the original had these values in registers.
        */
        g->eax = dest;
        g->ecx = ecx_tmp;
        g->edx = edx_tmp;
        g->esi = str;
        g->edi = edi;
        g->ebp = self;

        /*
           push 0x96
           push eax
           push esi
           call 0x1018fdf0

           Last pushed is first argument: FUN_1018fdf0(esi, eax, 0x96).
        */
        cow_cdecl(g, COW_IMG(0x1018fdf0u), 3u, str, dest, 0x96u);

        /* Restore callee-saved registers to the values the original restores them to. */
        g->ebx = orig_ebx;
        g->esi = orig_esi;
        g->edi = orig_edi;
        g->ebp = orig_ebp;

        /* mov eax, dword ptr [ebp + 0x618] */
        idx = rd32(self + 0x618u);

        /*
           lea ecx, [eax + eax*2]
           lea ecx, [ecx + ecx*4]
           lea ecx, [ecx + ecx*4]
           => ecx = idx * 75
        */
        ecx_tmp = idx + idx * 2u;
        ecx_tmp = ecx_tmp + ecx_tmp * 4u;
        ecx_tmp = ecx_tmp + ecx_tmp * 4u;

        /* lea edx, [eax + ebp] */
        edx_tmp = idx + self;

        /* mov byte ptr [edx + ecx*2 + 0x9a], 0 */
        wr8(edx_tmp + ecx_tmp * 2u + 0x9Au, 0u);

        /* mov eax, dword ptr [ebp + 0x618] */
        idx = rd32(self + 0x618u);

        /* mov dword ptr [ebp + eax*4 + 0x5ec], 0x97 */
        wr32(self + idx * 4u + 0x5ECu, 0x97u);

        g->ebx = orig_ebx;
        g->esi = orig_esi;
        g->edi = orig_edi;
        g->ebp = orig_ebp;
        return 1u;
    }

    /*
       lea edi, [eax + eax*2]
       add eax, ebp
       lea edi, [edi + edi*4]
       lea edi, [edi + edi*4]
       lea edi, [eax + edi*2 + 4]

       => edi = self + idx * 0x97 + 4
    */
    uint32_t dest = self + idx * 0x97u + 4u;

    /*
       mov eax, ecx
       shr ecx, 2
       rep movsd dword ptr es:[edi], dword ptr [esi]
    */
    uint32_t src = str;
    uint32_t dst = dest;
    const uint32_t dword_count = len >> 2;

    for (uint32_t i = 0u; i < dword_count; ++i)
    {
        wr32(dst, rd32(src));
        src += 4u;
        dst += 4u;
    }

    /*
       mov ecx, eax
       and ecx, 3
       rep movsb byte ptr es:[edi], byte ptr [esi]
    */
    const uint32_t byte_count = len & 3u;

    for (uint32_t i = 0u; i < byte_count; ++i)
    {
        wr8(dst, rd8(src));
        src += 1u;
        dst += 1u;
    }

    /* mov eax, dword ptr [ebp + 0x618] */
    idx = rd32(self + 0x618u);

    /* edx was set to len before the branch; inc edx after the copy. */
    const uint32_t stored_len = len + 1u;

    /*
       lea ecx, [eax + eax*2]
       lea ecx, [ecx + ecx*4]
       lea ecx, [ecx + ecx*4]
       lea ecx, [eax + ecx*2]
       mov byte ptr [ecx + ebp + 4], 0

       => write NUL at self + idx * 0x97 + len + 4
    */
    uint32_t ecx_tmp = idx + idx * 2u;
    ecx_tmp = ecx_tmp + ecx_tmp * 4u;
    ecx_tmp = ecx_tmp + ecx_tmp * 4u;
    ecx_tmp = (idx + len) + ecx_tmp * 2u;
    wr8(ecx_tmp + self + 4u, 0u);

    /* mov eax, dword ptr [ebp + 0x618] */
    idx = rd32(self + 0x618u);

    /* mov dword ptr [ebp + eax*4 + 0x5ec], edx */
    wr32(self + idx * 4u + 0x5ECu, stored_len);

    g->ebx = orig_ebx;
    g->esi = orig_esi;
    g->edi = orig_edi;
    g->ebp = orig_ebp;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1580(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t str = rd32(sp0 + 4u);
    const uint32_t param3 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101a1580(g, self, str, param3);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
